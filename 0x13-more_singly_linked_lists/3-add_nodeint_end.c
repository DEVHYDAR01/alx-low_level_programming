#include "lists.h"
/**
 * add_nodeint_end - This function will
 * add a block (node) at the end of a linked-list.
 * @n: This is the data type pointer of struct
 * @head: This is the data type pointer of pointer the head
 * Return: This returns elements of the str new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_block, *moving_node;

	new_block = malloc(sizeof(listint_t));
	if (new_block == NULL)
	{
		return (NULL);
	}

	new_block->n = n;
	new_block->next = NULL;
	if (*head == NULL)
	{
		*head = new_block;
	}
	else
	{
		moving_node = *head;
		while (moving_node->next != NULL)
			moving_node = moving_node->next;
		moving_node->next = new_block;
	}
	return (new_block);
}
