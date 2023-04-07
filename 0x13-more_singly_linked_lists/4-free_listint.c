#include "lists.h"

/**
 * free_listint - I will be writing a function that frees a listint_t list.
 * @head:  frees a listint_t list at head
 */
void free_listint(listint_t *head)
{
	listint_t *calc;

	while (head)
	{
		calc = head->next;
		free(head);
		head = calc;
	}
}
