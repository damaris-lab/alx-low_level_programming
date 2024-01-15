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
	int i;

	printf("no of raguements %d\n", argc);
	for (i = 1; i <  argc - 1; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
