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
	dlistint_t *current_node;
	unsigned int i = 0;


	if (h == NULL)
		return (NULL);
	
	if (idx == 0)
		return (add_dnodeint(h, n));
	
	current_node = *h;
	for (i = 0; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;
	
	if (current_node == NULL)
		return (NULL);
	
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;

	if (current_node->next != NULL)
	current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
	
	 
}
