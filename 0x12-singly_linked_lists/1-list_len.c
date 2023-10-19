#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the head of the linked list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t num_of_elements = 0;

	while (temp != NULL)
	{
		num_of_elements++;
		temp = temp->next;
	}
	return (num_of_elements);
}
