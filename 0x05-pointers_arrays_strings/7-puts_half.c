#include "main.h"

/**
 * puts_half: printd half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i, j, lenght;

	lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght++;
	}
	j = lenght / 2;
	if (lenght % 2 == 1)
	{
		j = (lenght + 1) / 2;
	}
	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
