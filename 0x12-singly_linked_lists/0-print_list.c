#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t num_of_nodes = 0;

	while (temp != NULL)
	{
		if (!temp->str)
			printf("[%i] (nil)\n", temp->len);
		else
			printf("[%i] %s\n", temp->len, temp->str);
		num_of_nodes++;
		temp = temp->next;
	}
	return (num_of_nodes);
}
