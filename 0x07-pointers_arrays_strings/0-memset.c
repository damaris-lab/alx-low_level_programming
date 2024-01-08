#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s:memory to be filled
 * @b:value to b e filled
 * @n:no of bytes to be filled
 * Return:return the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
