#include <stdio.h>

/**
 * main - Entry level
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		if (i < j && i != j)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
