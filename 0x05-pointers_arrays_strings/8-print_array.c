#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * separated by comma and space and
 *
 * displayed in the same order as in the array
 *
 * @a: pointer
 *
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
