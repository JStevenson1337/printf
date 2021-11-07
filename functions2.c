#include "main.h"
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
 * print_binary - print binary
 * @b: char
 * Return: int
 */
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
 * print_unsigned - print unsined int
 * @arg: argument
 * Return: int
 */
int print_unsigned(va_list arg)
{
	int divisor = 1, i, resp;
	unsigned int n = va_arg(arg, unsigned int);

	for	(i = 0; n / divisor > 9; i++, divisor *= 10)
	;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
	return (i + 1);
}
/**
 * _itoa - print unsined int
 * @str: argument
 * @num: int
 * Return: int
 */

char *_itoa(int num, char *str)
{
	int i = 0;
	char isNeg;

	if (num < 0)
	{
		isNeg = 1;
		num = num * -1;
	}
		while (num > 0)
		{
			str[i] = num % 10 + '0';
			num = num / 10;
			i++;
		}
		if (isNeg)
		{
			str[i] = '-';
			str[i + 1] = '\0';
		}
	return (str);
}
