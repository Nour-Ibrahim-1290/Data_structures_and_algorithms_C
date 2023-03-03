#include <stdio.h>
#include "mystring.h"

/**
 * _memcpy - Entry point
 *
 * Description: Copies n characters from src to dest
 * @dest: string to copy into 
 * @src: string to copy from
 * @len: how many characters to compare
 *
 * Return: void
 */

void *_memcpy(unsigned char *dest, unsigned char *src, int len)
{
	unsigned char *p = dest;

	if ((dest != NULL) && (src != NULL))
	{
		while (len)
		{
			*(dest++) = *(src++);
			--len;
		}
	}
	
	return (p);
}
