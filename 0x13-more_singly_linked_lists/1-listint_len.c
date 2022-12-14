#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: linked list
 *
 * Return: Number of elements in the  linked list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next, num++;
	}
	return (num);
}
