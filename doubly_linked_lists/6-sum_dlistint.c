#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of alinked list.
 * @head: Pointer to the head of the list
 * Return: The number of nodes
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		sum = sum + current_node->n;
		current_node = current_node->next;
	}
	return (sum);

}
