#include "main.h"

/**
 * clear_bit - print sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to change
 * @index: from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	t = ~(1 << index);
	*n = *n & t;

	return (1);

}
