#include "lists.h"
/**
 * list_len - This function will count all the elements of
 * the struct list_t list
 * @h: This is the input head of singly linked list
 *
 * Return: Number of nodes is returned
 */
size_t list_len(const list_t *h)
{
	size_t listcounter = 0;

	while (h != NULL)
	{
		h = h->next;
		listcounter++;
	}
	return (listcounter);
}
