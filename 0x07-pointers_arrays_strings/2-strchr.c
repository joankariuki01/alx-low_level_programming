#include "main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to string
 *
 * @c: char to locate
 *
 * Return: a pointer to the first occurrence of c in the string s,
 * or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
