#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char n, alphabet;

	for (n = 0; n <= 9; n++)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
	}
}

