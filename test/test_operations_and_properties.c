#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include "numberOperations.h"
#include "armstrongNumber.h"
#include "fibonacciNumber.h"
#include "neonNumber.h"
#include "palindrome.h"
#include "perfectSquare.h"
#include "primeNumber.h"
#define PROJECT_NAME    "OperationsAndProperties"

/* Prototypes for all the test functions */
void test_armstrongNumber(void);
void test_fibonacciNumber(void);
void test_neonNumber(void);
void test_palindrome(void);
void test_perfectSquare(void);
void test_primeNumber(void);
void test_add(void);
void test_subtract(void);
void test_divide(void);
void test_multiply(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "divide", test_multiply);
  CU_add_test(suite, "multiply", test_divide);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_add(void) {
  CU_ASSERT(50 == add(30, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1501 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-30 == subtract(0, 30));
  
  /* Dummy fail*/
  CU_ASSERT(10 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(25 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));
  CU_ASSERT(5 == divide(20,4));
  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_armstrongNumber(void){
  CU_ASSERT(1 == armstrongNumber(153));
  CU_ASSERT(0 == armstrongNumber(123));
}
void test_fibonacciNumber(void){
  CU_ASSERT(1 == fibonacciNumber(13));
  CU_ASSERT(0 == fibonacciNumber(12));
}
void test_neonNumber(void){
  CU_ASSERT(1 == neonNumber(9));
  CU_ASSERT(1 == neonNumber(8));
}
void test_perfectSquare(void){
  CU_ASSERT(1 == perfectSquare(9));
  CU_ASSERT(0 == perfectSquare(13));
}
void test_palindrome(void)
{
  CU_ASSERT(1 == palindrome(12321));
  CU_ASSERT(0 == palindrome(12341));
}
void test_primeNumber(void){
  CU_ASSERT(1 == primeNumber(7));
  CU_ASSERT(-1 == primeNumber(8));
}
