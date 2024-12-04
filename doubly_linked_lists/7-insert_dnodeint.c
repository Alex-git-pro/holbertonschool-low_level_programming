#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to the head of the list
 * @n: integer
 * Return: The number of nodes
 */



dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)

{
	dlistint_t *new_node;
	dlistint_t *current_node = *h;
	unsigned int count = 0;


	if (h == NULL)
		return (NULL);
	
	if (idx == 0)
		return (add_dnodeint(h, n));
	
	while (current_node != NULL && count < idx - 1)
	{
		current_node = current_node->next;
		count++;
	}
	
	if (current_node == NULL)
		return (NULL);

	if (current_node->next == NULL)
		return (add_dnodeint_end(h, n));
	
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;
	current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
	
	 
}
