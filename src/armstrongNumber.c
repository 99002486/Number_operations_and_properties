#include "armstrongNumber.h"
#include<math.h>

int armstrongNumber(int number)
{
	int initialNumber, length=0;
	float sum = 0;
	/* The following code was taken and modified from programiz.com*/

	// store the number of digits of number in length
	for (initialNumber = number; initialNumber != 0; ++length) {
		initialNumber /= 10;
	}

	for (initialNumber = number; initialNumber != 0; initialNumber /= 10) {
		 int remainder = initialNumber % 10;

	// store the sum of the power of individual digits in result
		sum += pow(remainder, length);
   }
   return ((int)sum == number);
}
