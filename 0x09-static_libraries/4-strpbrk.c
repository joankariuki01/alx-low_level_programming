#include "main.h"

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
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
