#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: Pointer to the pointer of the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if successful, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
		dlistint_t *current_node = *head;
		unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; current_node != NULL && i < index; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	if (current_node == *head)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (current_node->prev != NULL)
			current_node->prev->next = current_node->next;

		if (current_node->next != NULL)
			current_node->next->prev = current_node->prev;
	}

	free(current_node);

	return (1);
}


