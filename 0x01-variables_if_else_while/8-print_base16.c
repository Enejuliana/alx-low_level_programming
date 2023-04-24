#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)

{

	int b;
	char small;

	for (b = '0'; b <= '9'; b++)
	putchar(b);

	for (small = 'a'; small <= 'f'; small++)
	putchar(small);
	putchar('\n');

	return (0);

}
