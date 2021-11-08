#include "main.h"

/**
 * print_invalid
 * Prints an error message to the user.
 *
 *
 * @return int
 */
int print_invalid()
{
	_putchar('%');
	_putchar('%');
	return (2);
}


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
int print_char(va_list c)
{
	return (_putchar(va_arg(c, int)));
}


/**
 * print_string - prints a string
 *
 * @spec: format
 * Return: string.
 */

int print_string(va_list spec)
{
	char *s;
	int i;

	s = va_arg(spec, char *);
	if (s == NULL)
		return (print_invalid());
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
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
int print_int(va_list arg)
{

unsigned int divisor = 1, i, rev, charPrinted = 0;
int n = va_arg(arg, int);

if (n < 0)
{
	_putchar('-');
	charPrinted++;
	n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10, charPrinted++)
{
	rev = n / divisor;
	_putchar('0' + rev);
}
return (charPrinted);
}

int print_binary(va_list b)
{
	unsigned int n = va_arg(b, unsigned int);
	int i, j;
	int count = 0;

	for (i = 0; i < 32; i++)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
			count++;
		}
		else
		{
			_putchar('0');
			count++;
		}
		if (i % 8 == 7)
		{
			_putchar(' ');
			count++;
		}
	}
	return (count);
}

/**
 * print_unsigned - prints an unsigned int.
 * @arg: argument
 * Return: 0
 */

int print_unsigned(va_list arg)
{
int divisor = 1, i, resp;
unsigned int n = va_arg(arg, unsigned int);

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (i + 1);
}

