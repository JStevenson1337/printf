#include "main.h"
<<<<<<< HEAD
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
=======


int _printf(const char *format, ...)
{
	unsigned int i;
	int id = 0, len = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
			continue;
		}
		if (format[i + 1] == '%')
>>>>>>> main
		{
			_putchar('%');
			len++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		id = get_func(format[i + 1], arg);
		if (id == -1 || id != 0)
			i++;
		if (id > 0)
			len += id;

		if (id == 0)
		{
			_putchar('%');
			len++;
		}
<<<<<<< HEAD
		i++; }
	va_end(args);
	return (printedchar); }

=======
	}
	va_end(arg);
	return (len);
}
>>>>>>> main
