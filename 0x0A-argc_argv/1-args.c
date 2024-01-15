#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguement passed to it
 * @argc: no of arguements
 * @argv: array of pointer to the arguement
 * Return:0 always
 *
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

