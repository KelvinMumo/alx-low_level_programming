#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the pointer to list_t list
 * @str: string to add in the node
 *
 * Return: address of the new element, or NULL if it fails
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
