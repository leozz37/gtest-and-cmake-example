#include "gtest/gtest.h"
#include "Math.hpp"

TEST(Math, sum) {
    Math math;

    const double expectedResult = 10;
    const double actualResult   = math.sum(5, 5);

    ASSERT_NEAR(expectedResult, actualResult, 1.0e-11);
}
