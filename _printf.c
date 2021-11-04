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
		do {
			_putchar(format[i]);
			i++;
		} while (format[i] == '%');

			
}
	printedchars++;
i++;
length++;
va_end(ap);
			
return (printedchars);
}
