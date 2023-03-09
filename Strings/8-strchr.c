#include <stdlib.h>
#include "mystring.h"

/**
 * _strchr - Entry point
 *
 * Description: Searches for the first occurances of the character c
 * in the string str
 * @str: string to copy into
 * @c: character to copy
 *
 * Return: pointer to str
 */

char *_strchr(char *str, unsigned char c)
{
	char *flag = NULL;

	do
	{
		if (*str == c)
			flag = str;
	}
	while (*str++);

	return (flag);
}
