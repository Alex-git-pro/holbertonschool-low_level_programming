#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the number elements of dlistint_t
 * @h: pointer th the head of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
