#include"main.h"
/**
 * set_bit - set bit to 1 at a given index
 * @n:the bit
 * @index:the given index
 * Return:return 1 on success 0 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
