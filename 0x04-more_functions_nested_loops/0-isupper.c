#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks is character is uppercase
 *
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 if lowercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
