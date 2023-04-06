#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements
 * of a listint_t list
 * @h: linked list
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t calc = 0;

	while (h)
	{
		printf("%d\n", h->n);
		calc++;
		h = h->next;
	}

	return (calc);
}
