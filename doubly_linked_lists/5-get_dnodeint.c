#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: index
 * Return: The number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)

{
	unsigned int i = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (i == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		i = i + 1;
	}
	return (NULL);
}
