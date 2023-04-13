#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: bit number to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aff, outc;
	unsigned int k, l;

	k = 0;
	outc = 1;
	aff = n ^ m;
	for (l = 0; l < (sizeof(unsigned long int) * 8); l++)
	{
		if (outc == (aff & outc))
			k++;
		outc <<= 1;
	}

	return (k);
}
