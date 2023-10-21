#include <stdio.h>

/**
 * main - Takes numbers 1 -100, prints 'Fizz' for numbers that are 
 *
 * multiples of 3 and 'Buzz' for multiples of 5. 
 *
 * Multiples of both 3 and 5 print 'FizzBuzz'.
 *
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
