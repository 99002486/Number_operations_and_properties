#include "numberOperations.h"
#include<stdio.h>

int add(int num1, int num2)
{
  return num1+num2;
}

int subtract(int num1,int num2)
{
  return num1 - num2;
}

int divide(int num1,int num2)
{
  if(num2 == 0)
  {
    printf("Division by zero not possible");
    return 0;
  }
  else
  {
    return num1/num2;
  }
}

int multiply(int num1, int num2)
{
  return num1*num2;
}
int raisedto(int num1, int num2)
{
  int product=1;
  for(int i=0;i<num2;i++)
  {
    product *= num1;
  }
  return product;
}
