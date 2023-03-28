#include "main.h"

/**
 * puts2 - prints every other charachter of a string
 * @str: string
 * Return: string
 */

void puts2(char *str)
{
	int lenght = 0;
	int n = 0;
	char *a = str;
	int i;

	while (*a != '\0')
	{
		a++;
		lenght++;
	}
	n = lenght - 1;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
