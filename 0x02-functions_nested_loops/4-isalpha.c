#include "main.h"
/**
 * _isalpha - Entry point
 * Description: ''
 * @c: character
 * Return: 1 if c is a letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
