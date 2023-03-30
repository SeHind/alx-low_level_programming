#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: String
 * @src: string
 * @n: int
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
