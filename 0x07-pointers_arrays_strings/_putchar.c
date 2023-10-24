#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 *
 * @c: The character to print
 *
 * Return: 1(success), -1(error)
 * 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
