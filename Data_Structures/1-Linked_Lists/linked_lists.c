#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int Data;
	Struct Node *next;
};

void insertStart (struct Node **head, int data)
{
	struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));

	newNode - >
		data = data;
	newNode - >
		next = *head;

	/* changing the new head to this freshly entered node */
	*head = newNode;
}

void deleteStart(struct Node **head)
{
	struct Node *temp = *head;

	/* if there are no nodes in Linked List can't delete */
	if (*head == NULL)
	{
		printf("Linked List Emplty, nothing to delete");
		return;
	}
	/* move to next node */
	*head = (*head) -> next;

	free (temp);
}

void display(struct Node* node)
{
	printf("Linked List: ");

	/* as linked list will end when Node is Null */
	while (node != NULL)
	{
		printf("%d ", node -> data);
		node = node -> next;
	}
	printf("/n");
}
