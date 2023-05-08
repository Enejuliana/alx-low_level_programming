#include "main.h"
/**
 * _strpbrk - Entry point
 * @i: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *i, char *accept)
{
int j;

while (*i)
{
for (j = 0; accept[j]; j++)
{
if (*i == accept[j])
return (i);
}
i++;
}

return ('\0');
}
