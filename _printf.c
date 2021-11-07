#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints strings ints chars
 * @format: format
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, printedchar = 0;

va_start(args, format);
	while (format[i] != '\0')
	{
	if (!format)
		return (-1);
		else if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'i':
					printedchar += print_int(va_arg(args, int));
					break;
				case 'd':
					printedchar += print_int(va_arg(args, int));
					break;
				case 'c':
					printedchar += print_char(va_arg(args, int));
					break;
				case 's':
					printedchar += print_string(va_arg(args, char *));
					break;
				case '%':
					printedchar += percent();
					break;
			}}
		else
		{
			_putchar(format[i]), printedchar++;
		}
		i++; }
	va_end(args);
	return (printedchar); }

