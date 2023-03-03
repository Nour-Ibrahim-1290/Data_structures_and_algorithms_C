#include <stdlib.h>
#include "mystring.h"

/**
 * _memmove - Entry point
 *
 * Description: Copies n characters from src to dest
 * @dest: string to copy into
 * @src: string to copy from
 * @n: how many characters to compare
 *
 * Return: void
 */

void *_memmove(unsigned char *dest, unsigned char *src, int n)
{
	unsigned char *p = dest;

	/* allocate memory for tmp array */
	char *tmp = (char *)malloc(sizeof(char) * n);

	if (tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i = 0;
		/* copy src to tmp array */
		for (i = 0; i < n; ++i)
			*(tmp + i) = *(src + i);

		/* copy tmp to dest */
		for (i = 0; i < n; ++i)
			*(dest + i) = *(tmp + i);

		free(tmp);
	}

	return (p);
}
