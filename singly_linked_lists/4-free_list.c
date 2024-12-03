#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list.
 * @head: pointer to pointer to the  head of the list
 */

void free_list(list_t *head)

{
	list_t *current; /**variable temporaire*/
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
