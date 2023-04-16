#include "bubblesort.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

using namespace ::testing;


/**
 * BubblesortIntegral tests
 */
TEST(BubblesortIntegral, Empty)
{
    // Setup
    int array[1] = { 0 };
    // Test
    black::bubblesort(array, 0);
    // Assert
    ASSERT_THAT(array, ElementsAre(0));
}

TEST(BubblesortIntegral, SingleElement)
{
    // Setup
    int array[1] = { 1 };
    // Test
    black::bubblesort(array, 1);
    // Assert
    ASSERT_THAT(array, ElementsAre(1));
}

TEST(BubblesortIntegral, AlreadySorted)
{
    // Setup
    int array[3] = { 1, 2, 3};
    // Test
    black::bubblesort(array, 3);
    // Assert
    ASSERT_THAT(array, ElementsAre(1, 2, 3));
}

TEST(BubblesortIntegral, WorstCase)
{
    // Setup
    int array[3] = { 3, 2, 1};
    // Test
    black::bubblesort(array, 3);
    // Assert
    ASSERT_THAT(array, ElementsAre(1, 2, 3));
}

/**
 * BubblesortNonIntegral tests
 */
TEST(BubblesortNonIntegral, Empty)
{
    // Setup
    float array[1] = { 0.f };
    // Test
    black::bubblesort(array, 0);
    // Assert
    ASSERT_THAT(array, ElementsAre(0.f));
}

TEST(BubblesortNonIntegral, SingleElement)
{
    // Setup
    float array[1] = { 1.3f };
    // Test
    black::bubblesort(array, 1);
    // Assert
    ASSERT_THAT(array, ElementsAre(1.3f));
}

TEST(BubblesortNonIntegral, AlreadySorted)
{
    // Setup
    float array[3] = { 1.f, 2.f, 3.f};
    // Test
    black::bubblesort(array, 3);
    // Assert
    ASSERT_THAT(array, ElementsAre(1.f, 2.f, 3.f));
}

TEST(BubblesortNonIntegral, WorstCase)
{
    // Setup
    float array[3] = { 3.f, 2.f, 1.f };
    // Test
    black::bubblesort(array, 3);
    // Assert
    ASSERT_THAT(array, ElementsAre(1.f, 2.f, 3.f));
}

