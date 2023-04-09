#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - a function that prints a listint_t linked list.
 * @head: the head of the listint_t to check.
 *
 * Return: If the function fails,
 * Otherwise - xit the program with status 98
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cal, *help;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	cal = head->next;
	help = (head->next)->next;

	while (help)
	{
		if (cal == help)
		{
			cal = head;
			while (cal != help)
			{
				nodes++;
				cal = cal->next;
				help = help->next;
			}

			cal = cal->next;
			while (cal != help)
			{
				nodes++;
				cal = cal->next;
			}

			return (nodes);
		}

		cal = cal->next;
		help = (help->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: A head of the listint_t list.
 *
 * Return:  number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, i = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
