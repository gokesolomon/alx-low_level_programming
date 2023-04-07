#include "lists.h"

/**
 * delete_nodeint_at_index - i am writing a a function that deletes
 * the node at index index of a listint_t linked list.
 * @head: the first element in the list
 * @index:index is the index of the node that should be deleted
 *
 * Return: 1 (Success), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *calc = *head;
	listint_t *sn = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(calc);
		return (1);
	}

	while (i < index - 1)
	{
		if (!calc || !(calc->next))
			return (-1);
		calc = calc->next;
		i++;
	}


	sn = calc->next;
	calc->next = sn->next;
	free(sn);

	return (1);
}
