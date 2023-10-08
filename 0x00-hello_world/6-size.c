#include <stdio.h>

/**
 * main-Entry point
 *
 * Description: 'this program checks the size of various data types'
 *
 * Return: 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longLongIntType;
	float floatType;

	/**
	 * calculate size of variable using sizeof
	 *
	 */

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %d bytes(s)\n", sizeof(floatType));

	/**
	 * return 0
	*/

	return (0);
}


