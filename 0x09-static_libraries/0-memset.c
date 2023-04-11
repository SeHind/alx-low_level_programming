#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: adress memory to be filled
 * @b: value
 * @n: Integer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
