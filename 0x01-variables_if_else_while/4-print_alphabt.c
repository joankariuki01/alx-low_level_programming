#include <stdio.h>
/**
 * main - prints the aplphabet in lowercase except letters q and e
 *
 * ends with a new line
 *
 * Return: 0(success)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
