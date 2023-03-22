#include "main.h"
/**
 * _abs - Entry point
 * Description: ''
 * @c: Integer
 * Return: Always 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;
		return (abs_value);
	}
	return (c);
}
