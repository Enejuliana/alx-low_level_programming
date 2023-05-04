#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int p;

	a = 0;
while (dest[a] != '\0')
{
a++;
}

p = 0;
while (p < n && src[p] != '\0')
{
dest[a] = src[a];
p++;
p++;
}
dest[a] = '\0';

return (dest);
}
