#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: head pointer to list to be freed
 *
 */
void free_list(list_t *head)
{
	list_t *ptr;

	for ( ; head; )
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
