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

	va_start(ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == %)
		{
			*format[i] + 1
			switch (format[i])
			{
			case 'c':
			_putchar(va_arg(v_list, int));
				break;
			case 's':
				_strcpy(s, va_arg(v_list, char *));
				break;
			case 'd':
				_iota(va_arg(v_list, int), s);
				break;
			case 'i':
				_putchar(va_arg(v_list, int));
				break;
			case '%':
				_putchar('%');
				break;
			default:
				break;
			}
		}

	}
	printedchars++;
i++;

va_end(ap);
return (printedchars);
}

int _strlen(char *s)
{
    if (*s == '\0')
        return (0);
    else
        return (1 + _strlen(++s));
}

char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
char* _iota(int num, char *str)
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
		str[i] = '-';
		str[i + 1] = '\0';
	return (str);


}
