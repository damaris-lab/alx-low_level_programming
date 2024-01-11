#include "main.h"

/**
 * _puts_recursion - print a string and a new line
 * @s: pointer to a string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	s++;
	_puts_recursion(s);
}
