#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * 
 * @s: buffer array
 * 
 * @b: constant byte
 * 
 * @n: number of bytes
 * 
 * Return: pointer to the memory area s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
