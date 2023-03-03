#include <stdio.h>
#include "mystring.h"


/*
 * main - Test code
 *
 * Return: Alawys 0
 */

struct
{
	unsigned char name[40];
	int age;
} person1, person2;

int main(void)
{
	unsigned char dest[20] = {0};
	unsigned char src[] = "Hi Aticleworld";

	unsigned char myname[] = "Amlendra";

	_memcpy(dest, src, sizeof(src));
	printf("dest = %s\n", dest);

	_memcpy(person1.name, myname, sizeof(myname) + 1);
	person1.age = 30;

	_memcpy(person2.name, person1.name, sizeof(person1));

	printf("person2: %s, %d \n", person2.name, person2.age);

	return (0);
}
