#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked list,
 *  and returns the head node's data (n)
 *  @head: double pointer to list
 *  Return: hte head node's data (n)
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
