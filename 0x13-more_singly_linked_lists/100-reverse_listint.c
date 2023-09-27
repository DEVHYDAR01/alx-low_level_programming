#include "lists.h"
/**
 * reverse_listint - This function will reverse a list.
 * @head: This will be the data type double pointer the head
 * Return: new_block
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ancient_node = NULL;
	listint_t *before_node;

	while (head && *head)
	{
		before_node = (**head).next;
		(**head).next = ancient_node;
		ancient_node = *head;
		*head = before_node;
	}
	*head = ancient_node;
	return (*head);
}
