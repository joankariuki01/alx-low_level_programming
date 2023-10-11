#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
