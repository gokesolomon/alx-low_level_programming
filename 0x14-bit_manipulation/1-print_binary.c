#include "main.h"

/**
 * print_binary - i will be printing the binary representation of a number.
 * @n: the number that to print in binary.
 */

void print_binary(unsigned long int n)
{
	#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, kalc = 0;
	unsigned long int pres;

	for (i = ? ; i >= 0; i--)
	{
		pres = n >> i;

		if (pres & 1)
		{
			_putchar('1');
			pres++;
		}
		else if (pres)
			_putchar('0');
	}
	if (!pres)
		_putchar('0');
}
