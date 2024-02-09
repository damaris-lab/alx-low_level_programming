#include "main.h"
/**
 * clear_bit - clears the value of a bit at index,
 * starting from least bit at 0
 *
 * @n: number to get bit from
 * @index: index of bit
 *
 * Return: value of bit, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	var = ~(1UL << index);
	*n &= var;

	return (1);
}
