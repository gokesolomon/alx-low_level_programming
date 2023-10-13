#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - the singly linked list
 *
 * @n: Int.
 * @index: Index of the node in the list
 * @next: Point to the next node
 *
 * Description:the  singly linked list node structure
 * for ALX project
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - the Singly linked list with an express lane
 *
 * @n: Integer
 * @index: the index of the node in the list
 * @next: Point to the next node
 * @express: Point to the next node in the express lane
 *
 * Description: the singly linked list node structure with an express lane
 * for Holberton project
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
