#include <stdlib.h>
#include <stdlib.h>
/**
 * free_list - A function which frees a list_t list
 * @head: The list_t list that will be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		free(head->str);
		head = temp;
	}
}
