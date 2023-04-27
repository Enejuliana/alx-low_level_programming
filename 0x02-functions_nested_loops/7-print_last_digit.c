#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @j: the int to extract the last digit from
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int j)
{
	int s;

	if (j < 0)
	j = -j;
	s = j % 10;

	if (s < 0)
	s = -s;

	_putchar(s + '0');

	return (s);
}

