//
// Created by sajith on 11/8/22.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../generated/number_mock.grpc.pb.h"
#include "streaming_client.h"

using namespace testing;

TEST(StreamingClientTests, OnNextShouldReturnFizzBuzzCorrespondingValue2)
{
    // MockNumberServiceStub is auto-generated with `generate_mock_code=true` when protoc is invoked (but you can define it by hand)
    auto serviceMock = std::make_unique<MockNumberServiceStub>();

    // fake responses that our mocked services will return to our client
    NumberResponse fakeResponse1;
    fakeResponse1.set_value(1);
    NumberResponse fakeResponse2;
    fakeResponse2.set_value(2);
    NumberResponse fakeResponse3;
    fakeResponse3.set_value(3);

    // since we have Next(ClientContext*, const NumberRequest&, NumberResponse*)
    // we can set the third argument to the response we want our service to reply back
    EXPECT_CALL(*serviceMock, Next(_, _, _))
            .WillOnce(DoAll(SetArgPointee<2>(fakeResponse1), Return(grpc::Status::OK)))
            .WillOnce(DoAll(SetArgPointee<2>(fakeResponse2), Return(grpc::Status::OK)))
            .WillOnce(DoAll(SetArgPointee<2>(fakeResponse3), Return(grpc::Status::OK)));

    const StreamingClient client(std::move(serviceMock));
    EXPECT_THAT(client.Next(), Eq("1"));
    EXPECT_THAT(client.Next(), Eq("2"));
    EXPECT_THAT(client.Next(), Eq("Fizz"));
}

template<class R>
class MockClientReader : public grpc::ClientReaderInterface<R>
{
public:
    MockClientReader() = default;

    // ClientStreamingInterface
    MOCK_METHOD0_T(Finish, grpc::Status());

    //ReaderInterface
    MOCK_METHOD1_T(NextMessageSize, bool(uint32_t *));
    MOCK_METHOD1_T(Read, bool(R*));

    // ClientReaderInterface
    MOCK_METHOD0_T(WaitForInitialMetadata, void());

};

TEST(StreamingClientTests, OnRangeShouldDoubleTheReceivedValue)
{
    const auto clientReaderMock = new MockClientReader<RangeResponse>();

    RangeResponse fakeResponse1;
    fakeResponse1.set_value(1);
    RangeResponse fakeResponse2;
    fakeResponse1.set_value(2);

    EXPECT_CALL(*clientReaderMock, Read(_))
            .WillOnce(DoAll(SetArgPointee<0>(fakeResponse1), Return(true)))
            .WillOnce(DoAll(SetArgPointee<0>(fakeResponse2), Return(true)))
            .WillOnce(DoAll(SetArgPointee<0>(RangeResponse{}), Return(false)));

    EXPECT_CALL(*clientReaderMock, Finish())
            .WillOnce(Return(grpc::Status::OK));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}