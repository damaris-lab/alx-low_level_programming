#include "main.h"
/**
 *_isalpha - checks for alphabetic character
 *@c:character to be checked
 *
 *Return: return i if c is a letter 0 if not
 */
int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
