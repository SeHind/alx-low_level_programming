#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenght = 0;

	while (dest[i++])
	{
		lenght++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[lenght++] = src[i];
	}

	return (dest);
}
