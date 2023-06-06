#include "lists.h"

/**
 * listint_len - the quantity of elements in a linked lists is returned
 * @h: linked list of kind listint_t to traverse
 *
 * Return: quantity of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
