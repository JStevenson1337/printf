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

