#include "main.h"
/**
 * print_sign - Entry point
 * Description: ''
 * @n: a number
 * Return: 1 if n is positive, -1 if n is negative and 0 if it equals to zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
