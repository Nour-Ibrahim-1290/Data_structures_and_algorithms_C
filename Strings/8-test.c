#include <stdio.h>
#include "mystring.h"

/*
 * main - Test code
 *
 * Return: Alawys 0
 */

int main(void)
{
	char s[] = "Aticleworld";

	unsigned char want_search = 'c';
	
	char *ptr = _strchr(s, want_search);
	if (ptr != NULL)
	{
		printf("%c found at position %ld.\n", want_search, ptr-s+1);
		printf("search charcter found: %s\n", ptr);
	}
	else
	{
		printf("search charcter not found\n");
	}

	return (0);
}
