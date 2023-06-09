#include "main.h"

/**
 * flip_bits - counts the number of b to be changed
 * to get from the first digit to another
 * @n: the first digit
 * @m: the second digit
 *
 * Return: number of b to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
