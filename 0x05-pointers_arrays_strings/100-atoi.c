#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @s: string
 * Return: Integer
 */

int _atoi(char *s)
{
	int a, b, c, lenght, d, e;

	a = 0;
	b = 0;
	c = 0;
	lenght = 0;
	d = 0;
	e = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	while (a < lenght && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			e = s[a] - '0';
			if (b % 2)
				e = -e;
			c = c * 10 + e;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);
	return (c);
}
