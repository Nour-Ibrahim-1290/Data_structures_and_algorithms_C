#include <stdio.h>
#include "mystring.h"


/*
 * main - Test code
 *
 * Return: Alawys 0
 */

void print_array(unsigned char *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	unsigned char arr[] = "ABCD";

	print_array(arr, sizeof(arr));

	_memset(arr, '0', sizeof(arr));

	print_array(arr, sizeof(arr));

	return (0);
}
