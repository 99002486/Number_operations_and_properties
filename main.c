#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "numberOperations.h"
#include "armstrongNumber.h"
#include "fibonacciNumber.h"
#include "neonNumber.h"
#include "palindrome.h"
#include "perfectSquare.h"
#include "primeNumber.h"

/*Selection variable*/
int function_selector;
int property_selector;
int operation_selector;

/*numbers that need to be entered*/
int number1 = 0;
int number2 = 0;

/*Valid Selections*/
enum functions{ PROPERTY = 1, OPERATIONS};
enum properties{ ARMSTRONG = 1, FIBONACCI, NEON, PALINDROME, PERFECTSQR, PRIME, EXIT_P};
enum operations{ ADD=1, SUBTRACT, DIVIDE, MULTIPLY, RAISEDTO, EXIT_O};

/*menus*/
void main_menu(void);
void property_menu(void);
void operations_menu(void);

/*Start of the application*/
int main(int argc, char*argv[])
{
	printf("\n****Operations and Properties***\n");
	while(1)
	{
		main_menu();
	}
}

void main_menu(void)
{
	printf("\nAvailable Functions\n");
	printf("\n1. Display a special property\n2. Operate on two numbers");
	printf("\n\tEnter your choice\n");

	scanf("%d",&function_selector);

	if(function_selector == PROPERTY)
	{
		property_menu();
	}
	else if(function_selector == OPERATIONS)
	{
		operations_menu();
	}
	else
	{
		printf("Invalid Function selected");
		exit(0);
	}
}

void property_menu(void)
{
	printf("\nSpecial numbers that can be identified\n");
	printf("\n 1. Armstrong Number 2. Fibonacci Number 3. Neon Number 4. Palindrome 5. Perfect Square 6. Prime Number 7. Exit \n");
	printf("Enter your selection");

	scanf("%d",&property_selector);
	printf("Enter number greater than 0: ");
	scanf("%d",&number1);
	if(property_selector < ARMSTRONG || property_selector > PRIME || number1 <=0 )
	{
		printf("Invalid identifier selected");
		exit(0);
	}
	int eval =0;
	switch(property_selector)
	{
	case ARMSTRONG:
		eval = armstrongNumber(number1);
		if(eval == 1)
			printf("It is an Armstrong Number");
		else
			printf("It is not an Armstrong Number");
		break;
	case FIBONACCI:
		eval = fibonacciNumber(number1);
		if(eval == 1)
			printf("It is a Fibonacci Number");
		else
			printf("It is not a Fibonacci Number");
		break;
	case NEON:
		eval = neonNumber(number1);
		if(eval == 1)
			printf("It is a Neon Number");
		else
			printf("It is not a Neon Number");
		break;
	case PALINDROME:
		eval = palindrome(number1);
		if(eval == 1)
			printf("It is a palindrome");
		else
			printf("It is not a palindrome");
		break;
	case PERFECTSQR:
		eval = perfectSquare(number1);
		if(eval == 1)
			printf("It is a perfect square");
		else
			printf("It is not a perfect square");
		break;
	case PRIME:
		eval = primeNumber(number1);
		if(eval == 1)
			printf("It is a Prime Number");
		else
			printf("It is not a Prime Number");
		break;
	case EXIT_P:
		exit(0);
		break;

	}

}

void operations_menu(void)
{
	printf("\nOperations that can be performed\n");
	printf("1. Add 2. Subtract 3. Divide 4. Multiply 5. Power");
	printf("Enter your selection:");

	scanf("%d",&operation_selector);
	int result;
	if(operation_selector < ADD || operation_selector > RAISEDTO)
	{
		printf("Invalid operation selected");
		exit(0);
	}
	switch(operation_selector)
	{
	case ADD:
		printf("enter a number");
		scanf("%d",&number1);
		printf("added to");
		scanf("%d",&number2);
		result = add(number1, number2);
		printf("%d",result);
		break;
	case SUBTRACT:
		printf("enter a number");
		scanf("%d",&number1);
		printf("subtracted by");
		scanf("%d",&number2);
		result = subtract(number1, number2);
		printf("%d",result);
		break;
	case DIVIDE:
		printf("enter a number");
		scanf("%d",&number1);
		printf("divided by");
		scanf("%d",&number2);
		result = divide(number1, number2);
		printf("%d",result);
		break;
	case MULTIPLY:
		printf("enter a number");
		scanf("%d",&number1);
		printf("multiplied by");
		scanf("%d",&number2);
		result = multiply(number1, number2);
		printf("%d",result);
		break;
	case RAISEDTO:
		printf("enter a number");
		scanf("%d",&number1);
		printf("raised to");
		scanf("%d",&number2);
		result = raisedto(number1, number2);
		printf("%d",result);
		break;
	case EXIT_O:
		exit(0);
		break;
	}
}
