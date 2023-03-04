#include <stdio.h>

/*
 * main - test linked_list struct
 *
 * Return: Alawys 0.
 */

int main(void)
{
	struct Node *head = NULL;

	/* Need '&' i.e. address as we need to change head */
	insertStart (&head, 100);
	insertStart (&head, 80);
	insertStart (&head, 60);
	insertStart (&head, 40);
	insertStart (&head, 20);

	/* No Need for '&' as not changing head in display operation */
	display (head);

	deleteStart (&head);
	deleteStart (&head);
	display (head);

	return (0);
}
