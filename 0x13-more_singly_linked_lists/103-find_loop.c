#include "lists.h"

/**
 * find_listint_loop -  a function that finds the loop in a linked list.
 * @head: list  linked
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *pause = head;

	if (!head)
		return (NULL);

	while (start && pause && pause->next)
	{
		pause = pause->next->next;
		start = start->next;
		if (pause == start)
		{
			start = head;
			while (start != pause)
			{
				start = start->next;
				pause = pause->next;
			}
			return (pause);
		}
	}

	return (NULL);
}
