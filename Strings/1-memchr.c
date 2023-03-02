#include "mystring.h"
#include <stdio.h>


/*
 * _memchr - Entry point
 *
 * Description: Searches for the first occurance of
 * the character c (an unasigned char) in the first
 * n bytes of the string pointed to, by the argument str.
 *
 * @str: char array creating a string
 * @c: chracter ascii code
 * @n: length to search in
 *
 * Return: void
 */


void *_memchr(unsigned char *str, unsigned char c, unsigned int n)
{
	unsigned char *p = str;
	unsigned char *isCharFind = NULL;

	while ((str != NULL) && (n--))
	{
		if (*p != c)
		{
			p++;
		}
		else
		{
			isCharFind = p;
			break;
		}
	}
	return (isCharFind);
}
