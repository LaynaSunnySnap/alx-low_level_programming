#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at agiven index in decimal
 * @n: number to search for
 * @index: index of the given bit
 *
 * Return: value of the given bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int gbit;

	if (index > 63)
		return (-1);

	gbit = (n >> index) & 1;

	return (gbit);
}
