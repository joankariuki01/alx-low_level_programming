#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
 * reset_to_98 - function to reset a variable to 98
 *
 * @n: variable with pointer
 */
void reset_to_98(int *n);



/**
 * swap_int - swaps two integer values
 *
 * @a: first integer
 *
 * @b: second integer
 */
void swap_int(int *a, int *b);


/**
 * _strlen - calculates length of string
 *
 * @s: string
 *
 * Return: returns length
 */
int _strlen(char *s);



/**
 * _puts - function that prints a string followed by a new line
 *
 * @str: string to print
 */
void _puts(char *str);


/**
 * print_rev - function to reverse a string
 *
 * @s: string to reverse
 */
void print_rev(char *s);


/**
 * rev_string - function to reverse the value of string
 *
 * @s: string to reverse
 */
void rev_string(char *s);


/**
 * puts2 - function that puts a string twice
 *
 * @str: string to put
 */
void puts2(char *str);



/**
 * puts_half - function to  put half of a string
 *
 * @str: string to put
 */
void puts_half(char *str);


/**
 * print_ array - function that prints an array
 *
 * @a: array to print
 *
 * @n: number of elements
 *
 */
void print_array(int *a, int n);



/**
 * _strcpy - main function
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: return value
 */
char *_strcpy(char *dest, char *src);


/**
 * _atoi - function that converts char to int
 *
 * @s: string to convert
 *
 * Return: return value
 */
int _atoi(char *s);

int _putchar(char c);

#endif
