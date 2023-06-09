#include "main.h"

/**
 * get_endianness - checks whether a machine be either a little or big endian
 * Return: 0 (big one), 1 (little one)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
