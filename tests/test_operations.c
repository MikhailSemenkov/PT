#include <unity.h>
#include "operations.h"

void setUp() {
}

void tearDown() {
}

void test_add() {
    TEST_ASSERT_EQUAL_INT(4, my_add(2, 2));
}

void test_sub() {
    TEST_ASSERT_EQUAL_INT(0, my_sub(2, 2));
}

void test_mul() {
    TEST_ASSERT_EQUAL_INT(4, my_mul(2, 2));
}

void test_div() {
    TEST_ASSERT_EQUAL_INT(1, my_div(2, 2));
    TEST_ASSERT_EQUAL_INT(4, my_div(12, 3));
}

void test_pow() {
    TEST_ASSERT_EQUAL_INT(4, my_pow(2, 2));
}

void test_factorial() {
    TEST_ASSERT_EQUAL_INT(6, my_factorial(3));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);
    RUN_TEST(test_pow);
    RUN_TEST(test_factorial);
    return UNITY_END();
}
