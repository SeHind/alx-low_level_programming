#include "main.h"

/**
 * _isupper - Checks if a charachter is uppercase or not
 * @n : INTEGER
 * Return: 1 if n is uppercase, 0 otherwise
 */

int _isupper(int n)
{
	if ((n >= 'A') && (n <= 'Z'))
	{
		return (1);
	}
	return (0);
}
