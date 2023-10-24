#include "main.h"
#include <stddef.h>


/**
 * _strspn - gets length of prefix substring
 *
 * @s: string
 *
 * @accept: bytes in prefix
 *
 * Return:length of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
