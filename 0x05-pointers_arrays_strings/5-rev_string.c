#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char c;
	int i, n, n1;

	n = 0;
	n1 = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	n1 = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		c = s[i];
		s[i] = s[n1];
		s[n1--] = c;
	}
}
