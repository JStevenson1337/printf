//#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	char *p_fmt;
	char *s;
	unsigned int i;

	va_list v_list;
	va_start(v_list, format);

	if (format == NULL)
		return (-1);

	p_fmt = (char *)format;
	while (*p_fmt != '\0')
	{
		if (*p_fmt != '%')
		{
			putbuff(*p_fmt);
			p_fmt++;
		}
		else
		{
			p_fmt++;
			}
