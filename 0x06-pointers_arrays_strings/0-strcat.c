#include "main.h"

/**
 * _strcat - main function
 *
 *Description: appends the src string to the dest string, overwriting the
 * null byte at the end of dest and then adding a terminating null byte
 *
 *@dest: dest string
 *
 *@src: src string
 *
 * Return: pointer to the resulting string dest
 */

char _strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

