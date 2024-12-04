#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: Pointer to the head of the list
 * Return: The number of nodes
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);

	}
}

