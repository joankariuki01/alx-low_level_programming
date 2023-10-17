#include "main.h"

/**
 * puts_half - prints the second half of a string
 *
 * for strings with an odd number of characters, function will
 *
 * truncate one character to make string even and proceed
 *
 * @str: string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		i++;
	}
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
