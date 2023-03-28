#include "main.h"

/**
 * swap_int: Entry point
 * @a: Integer
 * @b: Integer
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
