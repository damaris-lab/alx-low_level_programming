#include"variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - Returns the sum of all its paramters.
**@n:number of parameters to be passed to the function
*@...:optional arguement to calculate sum of
*Return:if If n == 0 return 0
*otherwise return sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
