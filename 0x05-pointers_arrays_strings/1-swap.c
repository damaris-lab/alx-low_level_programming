#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a:first vlue to swap
 * @b:second value
 * return:return th integer values after swapping
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
