#include "main.h"


/**
 * set_bit - i print sets the value of a bit to 1 at a given index.
 * @n: the pointer to the number to change
 * @index: starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)


{
	unsigned long int t;


	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	t = 1 << index;
	*n = *n | t;


	return (1);


}
