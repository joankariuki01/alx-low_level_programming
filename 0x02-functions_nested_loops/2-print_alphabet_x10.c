#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: 0 - success
 *
 */
void print_alphabet_x10(void)
{
	char n;
	char i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
