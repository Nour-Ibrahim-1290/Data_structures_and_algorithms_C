#include <stdio.h>

/**
 *fino -Entry point to the function
 *@n -nth number
 *
 *Description - get the sequence series
 */

int fino(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return (fino(n - 1) + fino(n -2));
	}

}

int main(void)
{
   /* Declaring and initializing a variable */
	int n = 10;

	int i;

	printf("The Finobacci series of %d is",n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n",fino(n));

	}

	return (0);
}
