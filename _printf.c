#include "main.h"
#include <stdarg.h>
<<<<<<< HEAD

=======
#include <stdlib.h>
>>>>>>> M2

/**
 * _printf - prints strings ints chars
 * @format: format
 * Return: int
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	char modify_t;

	unsigned int i = 0;
	int printedchars = 0;
	va_list args;
	char *p_fmt, *s;

	va_start(args, format);

=======
	va_list args;
	unsigned int i = 0, printedchar = 0;
>>>>>>> M2

	va_start(args, format);
	while (format[i] != '\0')
	{
<<<<<<< HEAD
		if (format[i] == '%')
		{

			i++;
			int (* f_func(char spec ))(va_list *args);
			{
				print_t pa[] = {
					{'c', print_char},
					// {'s', print_string},
					// {'d', print_int},
					// {'i', print_int},
					//{'b', print_binary},
					//{'o', print_octal},
					//{'u', print_unsigned},
					//{'x', print_hex},
					//{'X', print_HEX},
					//{'%', print_percent},
					//{NULL, NULL}
				};
			}
		}
	printedchars++;
i++;
	}
va_end(args);
return (printedchars);
}
=======
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
>>>>>>> M2
