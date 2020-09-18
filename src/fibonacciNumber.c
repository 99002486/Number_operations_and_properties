#include "fibonacciNumber.h"
#include "perfectSquare.h"
int fibonacciNumber(int number)
{
	return(perfectSquare(5*number*number +4) || perfectSquare(5*number*number - 4)); 
	//a number is part of the fibonacci sequence only either (5(n^2)-4) or (5(n^2) + 4) is true
	//source: https://www.geeksforgeeks.org/check-number-fibonacci-number/
}
