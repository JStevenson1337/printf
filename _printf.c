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


	va_start(ap, format);

	while (format[i] != '\0')
	{
		while (format[i] == '%')
		{
			_putchar(format[i]);
			i++;
		}

		if (format[i] == 'c')
		{
		char arg = va_arg(ap, int);

		_print_char(&arg);
		}
		else if (format[i] == 'd' || format[i] =='i')
		{
			int arg = va_arg(ap, int);
			printInt(&arg);
		}
}
	printedchars++;

va_end(ap);

return (printedchars);
}
