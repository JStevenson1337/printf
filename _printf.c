#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include "helper.c"


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
	va_list v_list;
	char *p_fmt, *s;

	va_start(v_list, format);
	*p_fmt = *format;

	while (p_fmt[i] != '\0')
	{
		if (p_fmt[i] == '%')
		{
			i++;
			{
				{'c', print_char(i);}
				{'s', print_string(i);}
				{'d', print_int(i);}
				{'i', print_int(i);}
				// {'b', print_binary(i);}
				// {'o', print_octal(i);}
				// {'x', print_hex(i);}
				// {'X', print_hex_upper(i);}
				{'%', print_percent(i);}
				{'\0', print_null(i);}
				{'\0', NULL;}
			}
		}
	printedchars++;
i++;
	}
va_end(v_list);
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
