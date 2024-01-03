#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * followed by a new line
 * @n:no fo elements to be printed
 * @a:array name
 *
 * return a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
