#include "main.h"

/**
 * print_square - prints a square on the terminal using # and _putchar
 *
 * @n: integer to determine size of the square
 */
void print_square(int n)
{
	int x, y;

	y = 0;

	if(n < 1)
		_putchar('\n');
	while (y < n)
	{
		x =0 ;
		while (x < n)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
