#include "lists.h"
/**
 * print_listint - This function will print all the elements of linked list.
 * @h: This is our data type to the  pointer of the struct.
 * Return: The elements of the str rep
 */
size_t print_listint(const listint_t *h)
{
	unsigned int rep = 0;
	const listint_t	 *new_node = h;

	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		rep = rep + 1;
		new_node = new_node->next;
	}
	return (rep);
}
