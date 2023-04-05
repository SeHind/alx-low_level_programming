#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: matrix
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int firstSum, secSum, i;

	firstSum = 0;
	secSum = 0;

	for (i = 0; i < size; i++)
	{
		firstSum += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		secSum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", firstSum, secSum);
}
