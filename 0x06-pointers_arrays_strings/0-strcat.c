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
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
