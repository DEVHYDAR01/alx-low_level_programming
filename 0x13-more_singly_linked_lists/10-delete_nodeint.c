#include "lists.h"

/**
 * delete_nodeint_at_index - This function will
 * delete a node at the index of a list.
 * @head: This is the data type pointer the head.
 * @index: This will be the data type unsigned int index
 * Return: return 1 if succed and -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int adder = 0;
	listint_t *mover_node = *head;
	listint_t *idx_node;

	if (mover_node && (!index))
	{
		*head = (*mover_node).next;
		free(mover_node);
		return (1);
	}
	while (mover_node)
	{
		if (adder + 1 == index)
		{
			idx_node = (*mover_node).next;
			if (idx_node)
			{
				mover_node->next = idx_node->next;
				free(idx_node);
				return (1);
			}
		}
		mover_node = mover_node->next;
		adder++;
	}
	return (-1);
}
