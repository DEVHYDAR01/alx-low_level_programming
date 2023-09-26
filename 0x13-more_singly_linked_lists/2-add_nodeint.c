#include "lists.h"
/**
 * add_nodeint - This function will add a node at the begining of a our list.
 * @n: This is the data type pointer of struct
 * @head: This is the data type pointer of the head
 * Return: return elements of the str new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_block;

	new_block = malloc(sizeof(listint_t));
	if (new_block == NULL)
	{
		return (NULL);
	}

	new_block->n = n;

	new_block->next = *head;
	*head = new_block;

	return (new_block);
}
