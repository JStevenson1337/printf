//#include "main.h"
#include <stdarg.h>
#include <stdio.h>



int putbuff(char *s);
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
	while (p_fmt[0] != '\0')
	{
		if (p_fmt[0] != '%')
		{
			putbuff(p_fmt);
			p_fmt++;
			continue;
		}
		p_fmt++;
		if (p_fmt[0] == '\0')
			return (-1);
	{
		if (p_fmt[i] == '%')
		{
			i++;
			switch (p_fmt[i])
			{
				case 'c':
					s = (char *)va_arg(v_list, int);
					putbuff(s);
					break;
				case 's':
					s = (char *)va_arg(v_list, char *);
					putbuff(s);
					break;
				case 'd':
					i = va_arg(v_list, int);
					putbuff(i);
					break;
				case 'x':
					i = va_arg(v_list, int);
					putbuff(i);
					break;
				case '%':
					putbuff("%");
					break;
				default:
					putbuff("%");
					putbuff(&p_fmt[i]);
					break;
			}
		}
		else
		{
			putbuff(p_fmt[i]);
		}
		i++;
	}
	{
