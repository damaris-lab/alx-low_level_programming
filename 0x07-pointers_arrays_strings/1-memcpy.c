#include "main.h"

/**
 * _memcpy - copies memory area
 * @src:source data to be copied
 * @dest:destination where data is to be copied
 * @n:number of bytes to be copied
 * Return:return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ptr);
}

