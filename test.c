#include<stdio.h>
#include "unity_internals.h"
#include "fun.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_sum(void)
{
    TEST_ASSERT_EQUAL(10,sum(7,3));
    TEST_ASSERT_EQUAL(7,sum(2,5));
}

void test_sub(void)
{
    TEST_ASSERT_EQUAL(0,sub(7,7));
    TEST_ASSERT_EQUAL(15,sub(30,15));
}

void test_mul(void)
{
    TEST_ASSERT_EQUAL(10,mul(5,2));
    TEST_ASSERT_EQUAL(0,mul(2,0));
}

void test_div(void)
{
    TEST_ASSERT_EQUAL(10,div(100,10));
    TEST_ASSERT_EQUAL(0,div(2,0));
}

int main()
{
    int number1 = 10;
    int number2 = 7;
    int add,diff,prod,quo;
    add = sum(number1,number2);
    diff = sub(number1,number2);
    prod = mul(number1,number2);
    quo = div(number1,number2);

    printf("Sum is %d\n Differnce is %d\n Product is %d\n Quotient is %d\n",add,diff,prod,quo);

    UNITY_BEGIN(); /* Initiate the Unity Test Framework */

    RUN_TEST(test_sum); /* Run Test functions */
    RUN_TEST(test_sub);
    RUN_TEST(test_mul);
    RUN_TEST(test_div);

    return UNITY_END(); /* Close the Unity Test Framework */

    }