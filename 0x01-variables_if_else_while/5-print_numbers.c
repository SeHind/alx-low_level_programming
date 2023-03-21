#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print all single digit numbers'
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
