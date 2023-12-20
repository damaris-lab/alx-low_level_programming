#include "main.h"

/**
 * print_alphabet_x10 - prints an alphbet 10x in lowercase
 *
 */
void print_alphabet_x10(void)
{
	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

