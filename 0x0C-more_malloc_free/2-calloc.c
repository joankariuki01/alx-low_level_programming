#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory of an array using calloc
 *
 * @nmemb: number of elements in array
 *
 * @size: size of elements in array
 *
 * Return: pointer to allocated memory if successful
 * NULL if size/nmemb is 0/calloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);

}

