#include "lists.h"

/**
 * sum_listint - I will be writing a function that returns
 * the sum of all the data (n) of a listint_t linked list.
 * @head: node first
 *
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *calc = head;

	while (calc)
	{
		sum += calc->n;
		calc = calc->next;
	}

	return (sum);
}
