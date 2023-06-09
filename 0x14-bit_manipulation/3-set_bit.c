#include "main.h"

/**
 * set_bit - sets a bit at a certain index to 1
 * @n: pointer to the nos to be changed
 * @index: index of the b to be set to 1
 *
 * Return: 1 (succes), -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
