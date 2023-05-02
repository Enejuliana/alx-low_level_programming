#include "main.h"
/**
 * print_rev - imprime en reversa
 * @c: string
 * return: 0
 */
void print_rev(char *c)
{
int longi = 0;
int m;

while (*c != '\0')
{
longi++;
c++;
}
c--;
for (m = longi; m > 0; m--)
{
_putchar(*c);
c--;
}

_putchar('\n');
}
