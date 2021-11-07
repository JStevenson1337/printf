#include "main.h"
/**
 * _printf - print string, int ect
 * @format: specifier
 * Return: int
 */
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
			_putchar(format[i]), len++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%'), len++, i++;
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
		{_putchar('%'), len++; }	}
	va_end(arg);
	return (len);
}
