#include "unity.h"
#include "calc_operations.h"
#define PROJECT_NAME "SCIENTIFIC CALCULATOR"
void test_add();
void test_add();
void test_sub();
void test_multiply();
void test_divide();
void test_mod();
void test_power();
void test_fact();
void test_square();
void test_cube();
void test_squareroot();
void test_sinx();
void test_cosx();
void test_tanx();
void test_secx();
void test_cosecx();
void test_cotx();

void setUp()
{

}
void tearDown()
{

}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    RUN_TEST(test_mod);
    RUN_TEST(test_power);
    RUN_TEST(test_fact);
    RUN_TEST(test_square);
    RUN_TEST(test_cube);
    RUN_TEST(test_squareroot);
    RUN_TEST(test_sinx);
    RUN_TEST(test_cosx);
    RUN_TEST(test_tanx);
    RUN_TEST(test_secx);
    RUN_TEST(test_cosecx);
    RUN_TEST(test_cotx);
    
    return UNITY_END;
 
}

