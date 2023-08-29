#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node's data, return 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int a;

	if (head == NULL || *head == NULL)
		return (0);

	a = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (a);
}
