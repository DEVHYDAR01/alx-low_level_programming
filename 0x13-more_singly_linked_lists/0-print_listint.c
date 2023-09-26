#include "lists.h"
/**
 * print_listint - This function will print all the elements of linked list.
 * @h: This is our data type to the  pointer of the struct.
 * Return: The elements of the str rep
 */
size_t print_listint(const listint_t *h)
{
	int rep = 0;
	const listint_t	 *new_node = h;

	for (newnode; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		rep++;
	}
	return (rep);
}
