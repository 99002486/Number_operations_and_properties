#include "palindrome.h"

int palindrome(int number)
{
	int reversed_number = 0, original_number;
    	original_number = number;

    	// reversed integer is stored in reversed_number
    	while (number != 0) 
	{
        	int remainder = number % 10;
        	reversed_number = (reversed_number * 10) + remainder;
        	number /= 10;
    	}
	return(reversed_number == original_number);
}
