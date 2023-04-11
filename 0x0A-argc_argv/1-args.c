#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: Count of argv
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
