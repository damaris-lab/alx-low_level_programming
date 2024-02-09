#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:the value to be returned
 * @index:the index location
 * Return:the value of bit at index or 0 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int k;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	k = 1UL << index;

	if ((n & k) != 0)
		return (1);
	else
		return (0);
}
