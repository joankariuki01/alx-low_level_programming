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

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int count = 0;

    while (count < n)
    {
        s[count] = b;
        count++;
    }
    return (s);
}
