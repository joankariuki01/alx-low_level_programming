#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * to the buffer pointed to by dest (including the terminating null byte (\0))
 *
 * @dest: pointer to buffer
 *
 * @src: string to copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n, i;

	n = 0;

	while (src[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
