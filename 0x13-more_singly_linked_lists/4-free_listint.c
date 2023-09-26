#include "lists.h"
/**
 * free_listint - This function will free a  list
 * @head: The head of linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *stag;

	while (head != NULL)
	{
		stag = head;
		head = head->next;
		free(stag);
	}
}
