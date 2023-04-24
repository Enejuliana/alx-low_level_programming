#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all possible combinations of two two-digit
 * Return: Always 0 (Success)
 */

int main(void)

{
	int d, s;

	for (d = 0; d <= 98; d++)
	{
	for (s = d + 1; s <= 99; s++)
	{
	putchar((d / 10) + '0');
	putchar((d % 10) + '0');
	putchar(' ');
	putchar((s / 10) + '0');
	putchar((s % 10) + '0');

	if (d == 98 && s == 99)

	continue;
	putchar(',');
	putchar(' ');
	}}
	putchar('\n');
	return (0);
}

