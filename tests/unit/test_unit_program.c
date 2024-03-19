#include <logic.h>
#include <unity.h>

void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_NOT_EQUAL(5, add(2, 2));
}

void test_logic_substract(void)
{
    TEST_ASSERT_EQUAL(5, substract(10, 5));
    TEST_ASSERT_NOT_EQUAL(4, substract(10, 5));
}

void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(10, multiply(2, 5));
    TEST_ASSERT_NOT_EQUAL(5, multiply(2, 2));
}

void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(10.0, divide(50, 5));
    TEST_ASSERT_NOT_EQUAL(2.0, divide(2, 2));
}

void setUp(void)
{
}

void tearDown(void)
{
}

int main(int argc, char *argv[])
{
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
