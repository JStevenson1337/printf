#include <unistd.h>
#include "main.h"

/**
 * print_char - prints an integer
 * @c: integer to print
 *
 * Return: number of chars and digits printed
 */

int _print_char(va_list *c)
	{
		_putchar((char)va_arg(c, int));
		return (0);
	}

int _print_int(int value)
	{
		char *buffer[12];
		int isNegative = 0;
		int positionCounter = 0;
	}
