#include <stdio.h>
#include "main.h"

/**_putchar - writes a character to stdout
 * @c :this is the the character to be printed
 *
 * Return : 1 on sucess
 * on error -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
