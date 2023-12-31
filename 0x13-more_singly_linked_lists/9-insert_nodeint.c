#include "lists.h"
/**
 * insert_nodeint_at_index - This function will
 * insert a node to a given position.
 * @head: This is a data type pointer the head
 * @idx: This is a datatype unsigned int index
 * @n: This will be data type int
 * Return: new_block.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *mover_node, *new_block;
	unsigned int adder = 0;

	if (head == NULL && *head == NULL)
	{
		return (NULL);
	}

	mover_node = *head;
	if (idx == 0)
	{
		new_block = malloc(sizeof(listint_t));

		if (new_block == 0)
			return (NULL);
		(*new_block).n = n;
		(*new_block).next = mover_node;
		*head = new_block;
		return (new_block);
	}
	while (mover_node)
	{
		if (adder + 1 == idx)
		{
			new_block = malloc(sizeof(listint_t));

			if (new_block == 0)
			{
				return (NULL);
			}
			(*new_block).n = n;
			(*new_block).next = mover_node->next;
			mover_node->next = new_block;
			return (new_block);
		}
		mover_node = mover_node->next;
		adder++;
	}
	return (NULL);
}
