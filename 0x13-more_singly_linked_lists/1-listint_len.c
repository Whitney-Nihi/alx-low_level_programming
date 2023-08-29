#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: node pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}

	return (count);
}
