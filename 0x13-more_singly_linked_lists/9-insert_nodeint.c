#include "lists.h"

/**
 * insert_nodeint_at_index - I will be writing a function
 * that inserts a new node at a given position.
 * @head: the first node in the list
 * @idx:  the new node to be saved here
 * @n: insert value in the new node
 *
 * Return: The new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *sn;
	listint_t *calc = *head;

	sn = malloc(sizeof(listint_t));
	if (!sn || !head)
		return (NULL);

	sn->n = n;
	sn->next = NULL;

	if (idx == 0)
	{
		sn->next = *head;
		*head = sn;
		return (sn);
	}

	for (i = 0; calc && i < idx; i++)
	{
		if (i == idx - 1)
		{
			sn->next = calc->next;
			calc->next = sn;
			return (sn);
		}
		else
			calc = calc->next;
	}

	return (NULL);
}
