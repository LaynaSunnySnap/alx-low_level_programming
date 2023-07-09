#include "main.h"

/**
 * binary_to_uint - converting binary to unsigned int
 * @b: the number to be converted
 *
 * Return: the number after conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[i] - '0');
	}

	return (dec_num);
}
