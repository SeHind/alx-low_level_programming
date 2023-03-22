#include "main.h"
/**
 * _islower - Entry point
 * Description: 'detects lowercases'
 * Return: 1 if c is lowercase 1 otherwise
 * @c: character
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
