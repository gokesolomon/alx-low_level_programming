#include "lists.h"

/**
 * free_listint_safe -  a function that frees a listint_t list
 * @h: first node in the linkedlist
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int gri;
	listint_t *cal;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gri = *h - (*h)->next;
		if (gri > 0)
		{
			cal = (*h)->next;
			free(*h);
			*h = cal;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
