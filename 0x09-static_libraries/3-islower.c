#include "main.h"
/**
 * _islower - checks if character is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 is uppercase
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
