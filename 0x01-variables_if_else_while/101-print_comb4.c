#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The success combination in business
 * Return: Always 0 (Success)
 */

int main(void)

{

	int td, d, s;

	for (td = '0'; td < '9'; td++)
	{
	for (d = td + 1; d <= '9'; d++)
	{
	for (s = d + 1; s <= '9'; s++)
	{
	if ((d != td) != s)
	{
	putchar(td);
	putchar(d);
	putchar(s);
	if (td == '7' && d == '8')
	continue;
	putchar(',');
	putchar(' ');
	}}}}
	putchar('\n');
	return (0);

}

