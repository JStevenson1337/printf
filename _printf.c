#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	char *_mv;
	char *s;
	unsigned int i;

	va_list arg;
	va_start(arg, format);

	*_mv = format;



	for (i = 0; *_mv[i] != '\0'; i++)
	{
		{
			if (*mv[i] == '%')
				i++;
				return (mv[i]);
		}
	}
}
