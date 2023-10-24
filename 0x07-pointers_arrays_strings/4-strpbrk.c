#include "main.h"
#include <stddef.h>
/**
 * _strpbrk -  locates the first occurrence
 * of any of the bytes in the string 'accept'
 * in the string 's'
 *
 * @s: string to search
 *
 * @accept: set of bytes to find
 *
 * Return: pointer to first matching byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
