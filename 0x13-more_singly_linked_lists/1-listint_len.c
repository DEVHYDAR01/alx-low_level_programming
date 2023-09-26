#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - This is a function that will
 * return the number of elements in my list
 * @h: This is a pointer to listint_t struct
 * Return: This will return number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t blocks = 0;

	while (h)
	{
		blocks++;
		h = h->next;
	}
	return (blocks);
}
