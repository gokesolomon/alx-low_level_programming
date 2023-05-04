#include "main.h"


/**
 * binary_to_uint - i will be converting a binary number to an unsigned int
 * @b:  is a character that is  pointing to a string of 0 and 1 chars
 *
 * Return:the converted number, or
 * 0 if there is one or more chars in the string b that is not 0
 * or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int v;
	unsigned int k = 0;


	if (!b)
		return (0);


	for (v = 0; b[v]; v++)
	{
		if (b[v] < '0' || b[v] > '1')
			return (0);
		k = 2 * k + (b[v] - '0');
	}


	return (k);
}
