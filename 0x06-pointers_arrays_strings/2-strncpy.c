#include "main.h"

/**
 * _strncpy - copies n bytes of string pointed to by src to the buffer pointed
 *
 * to by dest
 *
 * @src: source
 *
 * @dest: destination
 *
 * @n: number of bytes to copy
 *
 * Return:pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{	[
			dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
