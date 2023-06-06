#include "lists.h"

/**
 * pop_listint - the head node of a linked list is deleted
 * @head: pointer to the first element in the list
 *
 * Return: the data that was deleted inside the elements,
 * and 0 if the list is empty
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
