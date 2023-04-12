#include "main.h"

/**
 * get_bit - i will be printing a function that returns
 * the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int fat;

	if (index > 63)
		return (-1);

	fat = (n >> index) & 1;

	return (fat);
}
