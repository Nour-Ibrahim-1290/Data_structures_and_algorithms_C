#include <stdio.h>
#include "mystring.h"
/*
 * main - Test code
 *print_result - print the results
 *
 * Return: Alawys 0
 */

void print_result(int n);

int main(void)
{
	int ret;
	unsigned char s1[] = "Hello";
	unsigned char s2[] = "HeAticleworld";

	ret = _memcmp(s1, s2, 5);
	print_result(ret);

	ret = _memcmp(s1, s2, 8);
	print_result(ret);

	ret = _memcmp(s1, s2, 2);
	print_result(ret);

	return (0);
}

/**
 * print_result - print the test results
 * @n: reult of memcmp
 * Return: void
 */

void print_result(int n)
{
	if (n > 0)
	{
		printf("s2 is less than s1.\n");
	}
	else if (n < 0)
	{
		printf("s1 is less than s2.\n");
	}
	else
	{
		printf("s1 is equal to s2.\n");
	}
}
