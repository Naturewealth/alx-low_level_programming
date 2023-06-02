#include <stdio.h>
#include "lists.h"
/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: the pointer to the list_t list to print
 *
 * Return: The amount of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t (s) = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
