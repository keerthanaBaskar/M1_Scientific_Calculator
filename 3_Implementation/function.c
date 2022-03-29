#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "unity.h"
#define PI 3.14159
int add(int *n1,int *n2)
{    
    int res=*n1 + *n2;
    return res;
}
int sub(int *n1,int *n2)
{    
    int res=*n1 - *n2;
    return res;
}
int multiply(int *n1,int *n2)
{
     int res=*n1 * *n2;
     return res;
}     
    int divide(int *n1,int *n2)
{
    int res=*n1 / *n2;
    return res;
    
}
int mod(int *n1,int *n2)
{    
    int res=*n1 % *n2;
    return res;
}
int fact(int *n1)
{
    int res=1;
    if(*n1 < 0)
    {
        return 0;
    }
    else
    {
         for (int i = 1; i <= *n1; ++i) 
            res *= i;;
    }
    return res;
}

int power(int *n1,int *n2) 
{
    int res;
    res=pow(*n1,*n2);
    return res;
}
int square(int *n1)
{
    int res;
    res=pow(*n1,2);
    return res;

}
int cube(int *n1)
{
    int res;
    res=pow(*n1,3);
    return res;
}
int squareroot(int *n1)
{
    int res;
    res= sqrt(*n1);
    return res;
}
int sinx(int *n1)
{
    float res;
    res=sin(*n1 * (PI/180));      
    return res;
}
int cosx(int *n1)
{
    float res;
    res=cos(*n1 * (PI/180));
    return res;
}
int tanx(int *n1)
{
    float res;
    res=tan(*n1 * (PI/180));
    return res; 
}    
int secx(int *n1)
{
    float res;
    res=1/cos(*n1 * (PI/180));
    return res;
}
int cosecx(int *n1)
{
    float res;
    res=1/sin(*n1 * (PI/180));
    return res;
}
int cotx(int *n1)
{
    float res;
    res=1/tan(*n1 * (PI/180));
    return res;
}
    void test_add(void)
    {
        TEST_ASSERT_EQUAL(40,add(10,20));
        TEST_ASSERT_EQUAL(1600,add(800,800));
        printf("Addition operation is completed");
    }
    void test_sub(void)
    {
        TEST_ASSERT_EQUAL(-30,sub(20,50));
        TEST_ASSERT_EQUAL(200,sub(500,300));
        printf("Subtraction operation is completed");
    }
    void test_multiply(void)
    {
        TEST_ASSERT_EQUAL(0,multiply(0,10));
        TEST_ASSERT_EQUAL(16,multiply(2,8));
        printf("Multiplication operation is completed");
    }
    void test_divide(void)
    {
        TEST_ASSERT_EQUAL(0,divide(0,4));
        TEST_ASSERT_EQUAL(8,divide(4,2));
        printf("Division operation is completed");
    }
    void test_mod(void)
    {
        TEST_ASSERT_EQUAL(0,mod(1,0));
        TEST_ASSERT_EQUAL(0,mod(36,6));
        printf("Modulus operation is completed");
    }
    void test_power(void)
    {
        TEST_ASSERT_EQUAL(0,power(1,0));
        TEST_ASSERT_EQUAL(16,power(4,2));
        printf("Power operation is completed");
    }
    void test_fact(void)
    {
        TEST_ASSERT_EQUAL(120,fact(5));
        TEST_ASSERT_EQUAL(6,fact(3));
        printf("Factorial operation is completed");
    }
    void test_square(void)
    {
        TEST_ASSERT_EQUAL(4,square(2));
        TEST_ASSERT_EQUAL(25,square(5));
        printf("Square operation is completed");
    }
    void test_cube(void)
    {
        TEST_ASSERT_EQUAL(8,cube(2));
        TEST_ASSERT_EQUAL(27,cube(3));
        printf("Cube operation is completed");
    }
    void test_squareroot(void)
    {
        TEST_ASSERT_EQUAL(5,squareroot(25));
        TEST_ASSERT_EQUAL(6,squareroot(36));
        printf("Squareroot operation is completed");
    }
    void test_sinx(void)
    {
        TEST_ASSERT_EQUAL(0.500,sinx(30));
        TEST_ASSERT_EQUAL(0.866,sinx(60));
        printf("Sine operation is completed");
    }
    void test_cosx(void)
    {
        TEST_ASSERT_EQUAL(0.866,cosx(30));
        TEST_ASSERT_EQUAL(0.707,cosx(45));
        printf("Cos operation is completed");
    }
    void test_tanx(void)
    {
        TEST_ASSERT_EQUAL(0.577,tanx(30));
        TEST_ASSERT_EQUAL(1.732,tanx(60));
        printf("Tan operation is completed");
    }
    void test_secx(void)
    {
        TEST_ASSERT_EQUAL(4.134,secx(76));
        TEST_ASSERT_EQUAL(1.206,secx(34));
        printf("Sec operation is completed");
    }
    void test_cosecx(void)
    {
        TEST_ASSERT_EQUAL(1.155,cosecx(30));
        TEST_ASSERT_EQUAL(1.015,cosecx(80));
        printf("Cosec operation is completed");
    }
    void test_cotx(void)
    {
        TEST_ASSERT_EQUAL(1.428,cotx(35));
        TEST_ASSERT_EQUAL(0.577,cotx(60));
        printf("Cot operation is completed");
    }
    
    
    
    
    
    
