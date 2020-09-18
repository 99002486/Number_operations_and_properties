#include "neonNumber.h"

int neonNumber(int number)
{
	int sqr = number * number;
	int sum = 0;
	while(sqr != 0)
	{
		sum += (sqr % 10);
		sqr /= 10;
	}
	return (sum == number);
}
