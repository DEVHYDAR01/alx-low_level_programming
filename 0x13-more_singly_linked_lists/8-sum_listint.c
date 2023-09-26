#include "lists.h"
/**
 * sum_listint - This function will return
 * the sum of all data O(n) of the list.
 * @head: This will be the data type pointer to the head
 * Return: This is the sum of all nodes.
 */
int sum_listint(listint_t *head)
{
	listint_t *mover_node;
	int total = 0;

	if (!head)
	{
		return (0);
	}

	mover_node = head;
	while (mover_node)
	{
		total = total + (*mover_node).n;
		mover_node = mover_node->next;
	}
	return (total);
}
