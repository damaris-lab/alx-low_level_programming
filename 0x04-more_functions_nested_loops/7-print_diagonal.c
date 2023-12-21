#include "main.h"

/**
 *print_diagonal - prints a diagonal line on the terminal
*@n:no of times a diagonal line is drawn
*/
void print_diagonal(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				if (j < i)
				{
					_putchar(' ');
				}
				_putchar('\n');
			}
		}
	}
}
