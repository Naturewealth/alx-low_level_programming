#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function which add a new node at the end of a list_t list
 * @head: Will double pointer to the list_t list
 * @str: The string to put in a new  node
 *
 * Return: The address of the new element and NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->len = len;
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
