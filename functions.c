#include "main.h"

/**
 * print_char - prints an integer
 * @c: integer to print
 *
 * Return: number of chars and digits printed
 */

int print_char(va_list c)
{
	_putchar((char) va_arg(c, int));
	return (1);
}
