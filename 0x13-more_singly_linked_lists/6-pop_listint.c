#include "lists.h"
/**
 * pop_listint - This function will delete the head of node in a linked-list.
 * @head: This will be my data type pointer the head.
 * Return: This head node data n is returned.
 */
int pop_listint(listint_t **head)
{
	listint_t *block;
	int back_value;

	if (*head == NULL)
	{
		return (0);
	}

	block = *head;
	back_value = block->n;
	*head = block->next;
	free(block);

	return (back_value);
}
