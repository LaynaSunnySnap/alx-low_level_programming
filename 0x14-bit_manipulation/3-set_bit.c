#include "main.h"

/**
 * set_bit - sets a certain bit at a certain index to 1
 * @n: points to the number to be changed
 * @index: index of the certain bit to be set. perioddtt
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
