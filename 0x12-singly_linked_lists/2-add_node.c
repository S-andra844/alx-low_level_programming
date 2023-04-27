#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new node at the beginning of a list_t list
 * @head: Pointer to a pointer to the head of the list_t list
 * @str: String value to be added to the new node
 *
 * Return: The address of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

