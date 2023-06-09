#include "main.h"

/**
 * get_bit - returns the value of a b at an index in the form of decimal number
 * @n: number to be searched
 * @index: index of the b
 *
 * Return: value of the b
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
