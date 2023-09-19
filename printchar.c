#include <unistd.h>

/**
 * print_char - function that prints a char
 * @c: char
 * Return: result
 */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
