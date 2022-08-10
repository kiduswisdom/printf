#include "main.h"

/**
 * print_c - Prints a char
 * @c: char to print
 * Return: Always 1 (Success)
 */
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
