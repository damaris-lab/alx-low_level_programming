#include "main.h"
#include <stddef.h>

/**
 * int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return:converted string or 0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		x <<= 1;
		x += b[i] - '0';
		i++;
	}
	return (x);
}
