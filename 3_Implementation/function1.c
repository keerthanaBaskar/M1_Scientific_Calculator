#include "stdio.h"
#include "unity.h"


int test_add(void)
    {
        TEST_ASSERT_EQUAL(40,add(10,20));
        TEST_ASSERT_EQUAL(1600,add(800,800));
        printf("Addition operation is completed");
    }
    int test_sub(void)
    {
        TEST_ASSERT_EQUAL(-30,sub(20,50));
        TEST_ASSERT_EQUAL(200,sub(500,300));
        printf("Subtraction operation is completed");
    }
    int test_multiply(void)
    {
        TEST_ASSERT_EQUAL(0,multiply(0,10));
        TEST_ASSERT_EQUAL(16,multiply(2,8));
        printf("Multiplication operation is completed");
    }
    int test_divide(void)
    {
        TEST_ASSERT_EQUAL(0,divide(0,4));
        TEST_ASSERT_EQUAL(8,divide(4,2));
        printf("Division operation is completed");
    }
    int test_mod(void)
    {
        TEST_ASSERT_EQUAL(0,mod(1,0));
        TEST_ASSERT_EQUAL(0,mod(36,6));
        printf("Modulus operation is completed");
    }
    int test_power(void)
    {
        TEST_ASSERT_EQUAL(0,power(1,0));
        TEST_ASSERT_EQUAL(16,power(4,2));
        printf("Power operation is completed");
    }
    int test_fact(void)
    {
        TEST_ASSERT_EQUAL(120,fact(5));
        TEST_ASSERT_EQUAL(6,fact(3));
        printf("Factorial operation is completed");
    }
    int test_square(void)
    {
        TEST_ASSERT_EQUAL(4,square(2));
        TEST_ASSERT_EQUAL(25,square(5));
        printf("Square operation is completed");
    }
    int test_cube(void)
    {
        TEST_ASSERT_EQUAL(8,cube(2));
        TEST_ASSERT_EQUAL(27,cube(3));
        printf("Cube operation is completed");
    }
    int test_squareroot(void)
    {
        TEST_ASSERT_EQUAL(5,squareroot(25));
        TEST_ASSERT_EQUAL(6,squareroot(36));
        printf("Squareroot operation is completed");
    }
    float test_sinx(void)
    {
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.500,sinx(30),"value is obtained");
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.866,sinx(60),"value is obtained");
        printf("Sine operation is completed");
    }
    float test_cosx(void)
    {
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.866,cosx(30),"value is obtained");
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.707,cosx(45),"value is obtained");
        printf("Cos operation is completed");
    }
    float test_tanx(void)
    {
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.577,tanx(30),"value is obtained");
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(1.732,tanx(60),"value is obtained");
        printf("Tan operation is completed");
    }
    float test_secx(void)
    {
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(4.134,secx(76),"value is obtained");
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(1.206,secx(34),"value is obtained");
        printf("Sec operation is completed");
    }
    float test_cosecx(void)
    {
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(1.155,cosecx(30),"value is obtained");
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(1.015,cosecx(80),"value is obtained");
        printf("Cosec operation is completed");
    }
    float test_cotx(void)
    {
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(1.428,cotx(35),"value is obtained");
        TEST_ASSERT_EQUAL_FLOAT_MESSAGE(0.577,cotx(60),"value is obtained");
        printf("Cot operation is completed");
    }
    
    
    
    
    
    