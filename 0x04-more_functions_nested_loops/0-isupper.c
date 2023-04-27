#include "main.h"

/**
 * _isupper - checks for lowercase
 * @c: The charcter to be checked
 * Return: 1 for uppercase or 0 fr anyting else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
