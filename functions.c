#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - print a char
 * @c: char
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints characters.
 * @c: char
 * Return: int
 */
int print_char(char c)
{
	if (!c)
		return (0);
		write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a string
 *
 * @spec: format
 * Return: string.
 */

int print_string(char *spec)
{
	int i;

	for (i = 0; spec[i] != '\0'; i++)
	{
		write(1, &spec[i], 1);
	}
	write(1, "\n", 1);

	return (i);
}

/**
 * percent - print %
 * Return: int
 */
int percent(void)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - prints integer
 * @n: int
 * Return: int
 */
int print_int(int n)
{
	unsigned int length = 0, modulo = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		length++;
	}

	while ((n / modulo) >= 10)
	{
		modulo = modulo * 10;
	}
	while (modulo >= 1)
	{
		_putchar((n / modulo) + '0');
		n = n % modulo;
		modulo = modulo / 10;
		length++;
	}
	return (length);
}
