#include "main.h"

/**
 * _isalpha - checks for alpha character
 * @c: The charcter to be checked
 * Return: 1 for alphabetic charctecter or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
