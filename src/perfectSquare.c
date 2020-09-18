#include "perfectSquare.h"
#include<math.h>
int perfectSquare(int number)
{
	int root = (int)sqrt(number);
	return(number == (root*root));
}
