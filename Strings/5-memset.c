#include <stdlib.h>
#include "mystring.h"

/**
 * _memset - Entry point
 *
 * Description: Copies the character c to the first
 * n characters of the string str
 * @str: string to copy into
 * @c: character to copy
 * @n: how many characters to compare
 *
 * Return: void
 */

void *_memset(unsigned char *str, unsigned char c, unsigned int n)
{
	unsigned char *p = str;

	while (n--)
	{
		*str++ = c;
	}

	return (p);
}
