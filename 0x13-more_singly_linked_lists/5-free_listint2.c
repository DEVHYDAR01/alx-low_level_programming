#include "lists.h"
/**
*free_listint2 - This function will free a  list
*@head: This will be a pointer to the head of the list
*
*Return: Returns NULL
*/
void free_listint2(listint_t **head)
{
	listint_t *point;
	listint_t **mover = head;

	if (mover != NULL)
	{
		while (*head != NULL)
		{
			point = *head;
			free(point);
			*head = (*head)->next;
		}
	*mover = NULL;
	}
}
