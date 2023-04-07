#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list.
 * @head: The first element in the list to pointer
 * @n:  in the new element input data
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *calc;
	listint_t *temp = *head;

	calc = malloc(sizeof(listint_t));
	if (!calc)
		return (NULL);

	calc->n = n;
	calc->next = NULL;

	if (*head == NULL)
	{
		*head = calc;
		return (calc);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = calc;

	return (calc);
}

