#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * @i: char
 * Return: void
 */

void print_numbers(void)
{
	char i =0;
	
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
