#include "main.h"

/**
 * rev_string - revers a string
 * @s: string
 */

void rev_string(char *s)
{
	char s_rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		count--;
		s_rev = s[i];
		s[i] = s[count];
		s[count] = s_rev;
	}
}
