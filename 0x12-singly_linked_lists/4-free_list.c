#include <stdlib.h>
#include "lists.h"
/**
 * free_list -  a function that frees a list_t list.
 * @head: head pointer to list nodes
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head, *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
