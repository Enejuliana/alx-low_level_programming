#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @i: The string to be printed.
 */
void _print_rev_recursion(char *i)
{
if (*i)
{
_print_rev_recursion(i + 1);
_putchar(*i);
}
}
