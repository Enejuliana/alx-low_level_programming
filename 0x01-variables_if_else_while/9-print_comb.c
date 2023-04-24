#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: Alway 0 (Success)
 */

int main(void)

{

	int sd;

	for (sd = '0'; sd <= '9'; sd++)
	{
	putchar(sd);
	if (sd != '9')
	{
	putchar(',');
	putchar (' ');
	}
	}
	putchar('\n');
	return (0);

}
