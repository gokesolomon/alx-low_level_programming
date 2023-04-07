#include "lists.h"

/**
 * pop_listint - I will be writing a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: point
 *
 * Return:if linked list is empty return zero
 */
int pop_listint(listint_t **head)
{
	listint_t *calc;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	calc = (*head)->next;
	free(*head);
	*head = calc;

	return (num);
}
