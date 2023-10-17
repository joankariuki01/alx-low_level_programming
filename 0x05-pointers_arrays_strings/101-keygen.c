#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 *
 * Return: 0 - sucess
 */
int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", (void *) myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
