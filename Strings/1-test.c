#include <stdio.h>
#include "mystring.h"
/*
 * main - Test code
 *print_result - print the results
 *
 * Return: Alawys 0
 */

void print_result(unsigned char *ptr, unsigned char *s, char c);

int main(void)
{
	unsigned char s[] = "Aticleworld";
	unsigned char *ptr;

	ptr = _memchr(s, 'c', sizeof(s));
	print_result(ptr, s, 'c');

	ptr = _memchr(s, 'z', sizeof(s));
	print_result(ptr, s, 'z');

	ptr = _memchr(s, 'w', 500);
	print_result(ptr, s, 'w');

	return (0);
}

/**
 * print_result - print the test results
 * @ptr: pointer to c place
 * @s: string to search in
 * Return: void
 */

void print_result(unsigned char *ptr, unsigned char *s, char c)
{
	if (ptr != NULL)
	{
		printf("%c found at position %ld.\n", c, ptr - s + 1);
		printf("search character found: %s\n", ptr);
	}
	else
	{
		printf("search character not found\n");
	}
}
