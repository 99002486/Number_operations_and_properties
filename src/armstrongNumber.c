#include "armstrongNumber.h"

int armstrongNumber(int number)
{
	int initialNumber,remainder;
	float sum;
	initialNumber = number;
	/* The following code was taken and modified from programiz.com*/

	// store the number of digits of num in n
	for (initialNumber = number; initialNumber != 0; ++n) {
		initialNumber /= 10;
	}

	for (initialNumber = number; initialNumber != 0; initialNumber /= 10) {
		remainder = originalNum % 10;

	// store the sum of the power of individual digits in result
		sum += pow(remainder, n);
   }
   return ((int)sum == number);
}