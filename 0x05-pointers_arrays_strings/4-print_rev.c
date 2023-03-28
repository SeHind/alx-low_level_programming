#include "main.h"

/**
 * print_rev - prints a string backwords
 * @s: the string
 */

void print_rev(char *s)
{
	int lenght = 0;
	int i;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (i = lenght; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
