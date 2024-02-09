#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0(bigendian) 1(littleendian)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	if (*c)
		return (1);
	else
		return (0);
}
