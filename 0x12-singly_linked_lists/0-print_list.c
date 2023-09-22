#include "lists.h"
/**
 * print_list - This function will print all
 * the elements of a list_t list.
 * @h: This is the  singly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t kap;

	kap = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		kap++;
	}
	return (kap);
}
