#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int longi = 0;
int s = 0;
char *p = str;
int i;

while (*p != '\0')
{
p++;
longi++;
}
s = longi - 1;
for (i = 0 ; i <= s ; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
