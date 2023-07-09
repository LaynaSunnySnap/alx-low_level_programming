#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 not 1
 * @n: points to the number to be changed
 * @index: index of the bit to be set or cleared
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
