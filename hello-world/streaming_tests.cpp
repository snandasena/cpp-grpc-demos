//
// Created by sajith on 11/8/22.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../generated/number_mock.grpc.pb.h"
#include "streaming_client.h"

using namespace testing;

TEST(StreamingClientTests, OnNextShouldReturnFizzBuzzCorrespondingValue)
{

}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}