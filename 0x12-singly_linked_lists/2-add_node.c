#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head of the linkedlist pointer
 * @str: string to store in the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);
	temp->next = *head;
	temp->len = (str) ? strlen(str) : 0;
	temp->str = (str) ? strdup(str) : NULL;
	if (str && !temp->str)
	{
		free(temp);
		return (NULL);
	}
	*head = temp;
	return (temp);

}
