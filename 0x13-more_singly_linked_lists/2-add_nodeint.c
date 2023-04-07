#include "lists.h"

/**
 * add_nodeint - I will be adding a new node at the beginning of a linked list.
 * @head: The first node in the list pointer.
 * @n: information to input  in that new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *calc;

	calc = malloc(sizeof(listint_t));
	if (calc == NULL)
		return (NULL);

	calc->n = n;
	calc->next = *head;
	*head = calc;

	return (calc);
}
