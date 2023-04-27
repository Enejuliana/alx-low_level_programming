#include "main.h"

/**
 * times_table - check description
 * Description: It prints 9 times table starting with 0
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, l;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	l = i * j;

	if ((l / 10) == 0)
	{
	if (j != 0)
	_putchar(' ');
	_putchar(l + '0');

	if (j == 9)
	continue;
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar((l / 10) + '0');
	_putchar((l % 10) + '0');
	if (j == 9)
	continue;
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}

