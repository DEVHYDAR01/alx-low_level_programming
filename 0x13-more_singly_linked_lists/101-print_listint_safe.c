#include "lists.h"
/**
 * print_listint_safe - This function will print a secured linked-list with a loop.
 * @head: This will be a data type double pointer the head.
 * Return: new_block will be returned
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *mover_n = NULL;
	const listint_t *l_n = NULL;
	size_t adder = 0;
	size_t new_block;

	mover_n = head;
	while (mover_n)
	{
		printf("[%p] %d\n", (void *)mover_n, (*mover_n).n);
		adder++;
		mover_n = (*mover_n).next;
		l_n = head;
		new_block = 0;
		while (new_block < adder)
		{
			if (mover_n == l_n)
			{
				printf("-> [%p] %d\n", (void *)mover_n, (*mover_n).n);
				return (adder);
			}
			l_n = (*l_n).next;
			new_block++;
		}
		if (!head)
			exit(98);
	}
	return (adder);
}
