#include <stdio.h>
/**
 * main - creates a loop to print the alphabet
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
