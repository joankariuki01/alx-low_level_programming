#include "main.h"

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @src: source
 *
 * @dest: destination
 *
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
