#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to pointer to the list_t list
 * @str: pointer to string
 * Return: address of the new element ,or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp = *head;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
