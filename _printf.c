#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Prints out text and data using a format specifier like the
 * standard printf()
 * @format: The string part that includes the format
 * Return: number of characters written
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int printedchars = 0;
	va_list ap;
	int length = 0;
	char *p_fmt, s;

	va_start(ap, format);
	*p_fmt = *format;

	while (p_fmt[i] != '\0')
	{
		while (p_fmt[i] == '%')
		{
			_putchar(p_fmt[i]);
			i++;
		}

		if (p_fmt[i] == 'c')
		{
		char arg = va_arg(ap, char);

		_print_char(&arg);
		}
		else if (p_fmt[i] == 'd' || p_fmt[i] =='i')
		{
			int arg = va_arg(ap, int);
			printInt(&arg);
		}
}
	printedchars++;

va_end(ap);

return (printedchars);
}
