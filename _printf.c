#include "main.h"
#include <stdarg.h>


/**
 * _printf - Prints out text and data using a format specifier like the
 * standard printf()
 * @format: The string part that includes the format
 * Return: number of characters written
 */

int _printf(const char *format, ...)
{
	char modify_t;

	unsigned int i = 0;
	int printedchars = 0;
	va_list args;
	char *p_fmt, *s;

	va_start(args, format);


	while (format[i] != '\0')
	{
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
