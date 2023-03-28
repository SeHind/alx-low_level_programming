#include "main.h"

/**
 * _strlen - Entry point
 * @s: Char
 * Return: lenght of a string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
