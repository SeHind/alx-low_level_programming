#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: Count
 * @argv: arguments
 * Return: 0 if true 1 if false
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	printf("Error\n");
	return (1);
}
