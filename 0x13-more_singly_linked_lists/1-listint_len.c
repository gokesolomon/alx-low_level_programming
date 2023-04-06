#include "lists.h"

/**
 * listint_len - I will be returning a number that is
 * in a linked lists of elements
 * @h: in a linked lists of elements
 *
 * Return: nodes figure
 */
size_t listint_len(const listint_t *h)
{
	size_t calc = 0;

	while (h)
	{
		calc++;
		h = h->next;
	}

	return (calc);
}
