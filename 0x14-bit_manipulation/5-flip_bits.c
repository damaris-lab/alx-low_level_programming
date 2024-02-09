#include "main.h"
/**
 * flip_bits - return number of bits that would need to be flipped to
 * transform one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count;

	count = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			count++;
	return (count);
}
