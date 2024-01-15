#include <stdio.h>
#include "main.h"

/**
 * main -print programs name
 * @argc: no of arguments
 * @argv: array of pointers to those arguements
 * Return: return o if success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
