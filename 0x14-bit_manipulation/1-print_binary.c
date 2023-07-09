#include "main.h"

/**
 * print_binary - prints a number in it's binary form
 * @n: number to be printed in binary forms
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int ndigit;

	for (i = 63; i >= 0; i--)
	{
		ndigit = n >> i;

		if (ndigit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
