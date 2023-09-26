#include "lists.h"
/**
*free_listint2 - This function will free a  list
*@head: This will be a pointer to the head of the list
*
*Return: Returns NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *mover;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		mover = *head;
		*head = (*head)->next;
		free(mover);
	}
}
