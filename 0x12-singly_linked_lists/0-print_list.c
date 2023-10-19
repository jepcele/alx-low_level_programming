#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	list_t *temp = h;
	size_t num_of_nodes = 0;

	while(temp != NULL)
	{
		if (!temp->str)
			printf("[0] (nil)");
		else
			printf("[%li] %s\n", num_of_nodes, temp->str);
		num_of_nodes++;
		temp = temp->next;
	}
	return (num_of_nodes);
}
