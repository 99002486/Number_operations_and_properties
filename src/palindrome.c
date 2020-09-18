#include "palindrome.h"

int palindrome(int number)
{
	int number, reversed_number = 0, remainder, original_number;
    original_number = number;

    // reversed integer is stored in reversedN
    while (n != 0) 
	{
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }
	return(reversed_number == number);
}