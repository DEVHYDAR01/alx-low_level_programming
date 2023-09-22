#include "lists.h"
/**
 * free_list - This function will free a list
 * @head: This is the head of the linked list.
 * Return: no return nothing.
 */
void free_list(list_t *head)
{
	list_t *live_node;

	while ((live_node = head) != NULL)
	{
		head = (*head).next;
		free((*live_node).str);
		free(live_node);
	}
}
