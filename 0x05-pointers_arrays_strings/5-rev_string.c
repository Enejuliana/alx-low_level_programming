#include "main.h"

/**
 * rev_string - Reverses a string
 * @c: Input string
 * Return: String in reverse
 */

void rev_string(char *c)
{
char rev = c[0];
int counter = 0;
int a;

while (c[counter] != '\0')
counter++;
for (a = 0; a < counter; a++)
{
counter--;
rev = c[a];
c[a] = c[counter];
c[counter] = rev;
}
}
