#include "lists.h"

/**
 * free_listint2 - I will be printing another function that
 * frees a listint_t list.
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *calc;

	if (head == NULL)
		return;

	while (*head)
	{
		calc = (*head)->next;
		free(*head);
		*head = calc;
	}

}
