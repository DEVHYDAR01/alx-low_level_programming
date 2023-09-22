#include "lists.h"
/**
 * add_node_end - This function will add a new node at the end
 * of a list_t list.
 * @head: This is a head of a linked list.
 * @str: This is a string to store in the list.
 * Return: address of the head is returned.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *live_node;
	size_t kap;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	kap = 0;

	while (str[kap])
		kap++;

	new_node->len = kap;
	new_node->next = NULL;
	live_node = *head;

	if (live_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (live_node->next != NULL)
			live_node = live_node->next;
		live_node->next = new_node;
	}

	return (*head);
}
