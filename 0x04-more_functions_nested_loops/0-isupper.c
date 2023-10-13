#include "main.h"
/**
 * _isupper - checks is character is uppercase
 *
 * @c: character to check
 *
 * Return: 1 if check failed, 0 for success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
