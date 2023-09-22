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
	list_t *new_node, *current_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	new_node->len = stringlen(str);
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
/**
 * stringlen - This function will determine the length of a string
 * @s: This will input a character string to
 * determine length of a string
 *
 * Return: integer count of length is returned.
 */

int stringlen(const char *s)
{
	int j = 0;

	for (j = 0; s[j]; j++)
		continue;
	return (j);
}
