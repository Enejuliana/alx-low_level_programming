#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */

int main(void)

{

	int dd, s;

	for (dd = '0'; dd < '9'; dd++)
	{
	for (s = dd + 1; s <= '9'; s++)
	{
	if (s != dd)
	{
	putchar(dd);
	putchar (s);
	if (dd == '8' && s == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}
