#include "main.h"

/**
 * clear_bit - sets the value of a certain b to 0
 * @n: pointer to the digit to be changed
 * @index: index of the b to be cleared
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
