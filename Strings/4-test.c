#include <stdio.h>
#include "mystring.h"


/*
 * main - Test code
 *
 * Return: Alawys 0
 */

int main(void)
{
	unsigned char dest[] = "Hi Aticleworld";
	unsigned char src[] = "Amlendra";

	unsigned char str1[50] = "I am going from Delhi to Gorakhpur";
	unsigned char str2[50] = "I am going from Delhi to Gorakhpur";

	/* First Test Case */
	printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);

	_memmove(dest, src, 5);

	printf("After memmove >> dest = %s, src = %s\n\n", dest, src);

	/* Second Test Case */
	printf("Function: \tmemmove with overlap\n");

	printf("Original :\t%s\n", str1);
	printf("Source:\t\t%s\n", str1 + 5);
	printf("Destination:\t%s\n", str1 + 11);

	_memmove(str1 + 11, str1 + 5, 29);

	printf("Result:\t\t%s\n", str1);
	printf("Length:\t\t%ld characters\n\n", sizeof(str1));
	
	/* Third Test Case */
	printf("Function: \tmemmove with overlap\n");

	printf("Original :\t%s\n", str2);
	printf("Source:\t\t%s\n", str2 + 5);
	printf("Destination:\t%s\n", str2 + 11);

	_memmove(str2 + 11, str2 + 5, 29);

	printf("Result:\t\t%s\n", str2);
	printf("Length:\t\t%ld characters\n\n", sizeof(str2));

	return (0);
}
