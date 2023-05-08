#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @i: starting address of memory to be filled
 * @j: the desired value
 * @l: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *i, char j, unsigned int l)
{
int k = 0;

for (; l > 0; k++)
{
i[k] = j;
l--;
}
return (i);
}
