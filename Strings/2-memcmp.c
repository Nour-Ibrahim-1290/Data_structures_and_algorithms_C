#include <stdio.h>
#include "mystring.h"

/**
 * _memcmp - Entry point
 *
 * Description: Compares the first n bytes of str1 and str2
 * @s1: 1st string to compare
 * @s2: 2nd string to compare
 * @len: how many chars to compare of the 2 strings
 *
 * Return: int
 */

int _memcmp(unsigned char *s1, unsigned char *s2, int len)
{
	int charCompareStatus = 0;

	if (s1 == s2)
	{
		return (charCompareStatus);
	}

	while (len > 0)
	{
		if (*s1 != *s2)
		{
			charCompareStatus = (*s1 > *s2) ? 1 : -1;
			break;
		}
		len--;
		s1++;
		s2++;
	}
	return (charCompareStatus);
}
