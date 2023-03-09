#include <stdio.h>

/**
 *Headerfile - printf
 *factorial_number - Entry point
 *@x - number to be checked
 *Description - Recurssive function
 */

int factorial_number(int x)
{
	if ( x == 0)
	{
		return (1);
	}
	else
	{
		return x * factorial_number(x - 1);
	}
}

int main(void)
{
	int x = 5;

	printf("The factorial number of %d is %d", x , factorial_number(x));

	return (0);

}

