#include "main.h"

/**
 * _isdigit - it checks if a number is from 0 to 9
 * @c: char
 * Return: 1 sucess 0 fail
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
