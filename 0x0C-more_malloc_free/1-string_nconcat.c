#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicates a string using malloc
 *
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		a[c] = str[c];
	a[c] = '\0';


	return (a);
}

