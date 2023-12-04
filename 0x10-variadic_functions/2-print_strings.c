#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_string - prints a string, followed by a new line
 *
 * @separator: string to be printed between the strings
 *
 * @n: number of strings passed to the function
 *
 * @...: variable number of strigns to be printed
 *
 */
void print_string(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			print("%s", str);


		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

