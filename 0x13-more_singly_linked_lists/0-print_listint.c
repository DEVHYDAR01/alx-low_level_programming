#include "lists.h"
/**
 * print_listint - This function will print all the elements of linked list.
 * @h: This is our data type to the  pointer of the struct.
 * @rep: my counter
 *
 * Return: The elements of the str rep
 */
size_t print_listint(const listint_t *h)
{
	unsigned int rep = 0;
	const listint_t	 *mover = h;

	while (mover != NULL)
	{
		printf("%d\n", mover->n);
		rep = rep + 1;
		mover = mover->next;
	}
	return (rep);
}
