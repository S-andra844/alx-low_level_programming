#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the numer of elements in a linked list_t
 * @h: Pointer to the head of the list_t list
 *
 * Return: the number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
