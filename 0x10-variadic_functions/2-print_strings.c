#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *  print_strings - prints strings followed by a new line
 *  @n:no of arguements passed
 *  @separator:the string to be printed between strings
 *  ...:optional arguements to be printed
 * Description: if separator is NULL it is not printed
* if one string is Null, nil is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
