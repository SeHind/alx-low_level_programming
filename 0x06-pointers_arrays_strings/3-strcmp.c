#include "main.h"

/**
 * strcmp - Compares two strings
 * @s1: String
 * @s2: String
 * Return: if s1 and s2 are the same: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
