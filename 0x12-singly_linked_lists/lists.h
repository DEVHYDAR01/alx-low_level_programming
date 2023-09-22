#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_k - This is the singly linked list
 * @str: string - Dynamic memory allocated (malloc'ed string)
 * @len: This will be the length of the string
 * @next: This will point to the next node
 *
 * Description: This is my singly linked list node structure
 */
typedef struct list_k
{
	char *str;
	unsigned int len;
	struct list_k *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
