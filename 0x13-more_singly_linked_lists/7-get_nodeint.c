#include "lists.h"
/**
*get_nodeint_at_index - This function will return the nth node of a linked list
*@head: This is a pointer to the head of the list  which is a structs
*@index: Going through the index of the node required.
*
*Return: the address of the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mover = NULL;
	unsigned int z = 0;

	while (head != NULL)
	{
		if (z <= index)
		{
			if (z == index)
			{
				mover =  head;
				break;
			}
			head = head->next;
			z++;
		}
		else
		{
			return (NULL);
		}
	}
	return (mover);
}
