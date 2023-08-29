#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to head pointer
 * @n: data to add to new node
 *
 * Return: the address of the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *ptr;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	for (ptr = *head; ptr->next; )
	{
		ptr = ptr->next;
	}

	ptr->next = newnode;

	return (newnode);
}
