#include "main.h"
/**
 *_isdigit - checks for a digit from 0 through 9
 *@c: char to be checked
 *Return:return 1 on success 0 on failure
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
