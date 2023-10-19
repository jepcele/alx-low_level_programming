#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head - head of the node pointer
 * @str: string to add to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t)), *node = *head;

	if (!temp)
		return (NULL);
	temp->len = (str) ? strlen(str) : 0;
	temp->str = (str) ? strdup(str) : NULL;
	if (!*head)
	{
		temp->next = *head;
	}
	else
	{
		while (*node != NULL)
		{
			node = head->next;
		}
	}
}
