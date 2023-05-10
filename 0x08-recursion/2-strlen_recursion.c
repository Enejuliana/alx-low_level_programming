#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @i: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *i)
{
int length = 0;

if (*i)
{
length++;
length += _strlen_recursion(i + 1);
}

return (length);
}
