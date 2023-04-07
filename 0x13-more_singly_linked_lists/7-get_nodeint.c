#include "lists.h"

/**
 * get_nodeint_at_index - i will be printing  a function that returns the nth
 * node of a listint_t linked list.
 * @head: the linked list in first node c.
 * @index: index list
 *
 * Return:if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *calc = head;

	while (calc && i < index)
	{
		calc = calc->next;
		i++;
	}

	return (0);
}
