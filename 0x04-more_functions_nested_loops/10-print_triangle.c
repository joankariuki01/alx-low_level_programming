#include "main.h"

/**
 * print_triangle - prints a triangle using '#'
 *
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	int n, i, j;

	n = 0;
	i = size - 1;
	while (n < size)
	{
		i = size - 1 - n;
		j = n + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		n++;
	}

	if (size <= 0)
		_putchar('\n');
}
