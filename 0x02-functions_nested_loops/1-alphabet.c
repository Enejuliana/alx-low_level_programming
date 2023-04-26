#include "main.h"
#include <unistd.h>
/**
 * main - prints the alphabet, in lowercase
 * Return: Always 0 (Success)
 */

int main(void)

{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);

	}
	_putchar('\n');

	return (0);
}
