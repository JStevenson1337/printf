// #include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int putbuff(char *s);
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	char *p_fmt;
	char s;
	unsigned int i = 0;

	va_list v_list;
	va_start(v_list, format);

	if (format == NULL)
		return (-1);

	p_fmt = (char *)format;
	while (*p_fmt != '\0')
	{
		if (*p_fmt != '%')
		{
			putbuff(p_fmt);
			p_fmt++;
		}
		else
		{
			p_fmt++;
			switch (*p_fmt)
			{
				case 'c':
					s = (char)va_arg(v_list, int);
					putbuff(&s);
					break;
				case 's':
					putbuff(va_arg(v_list, char *));
					break;
				case 'd':
					i = va_arg(v_list, int);
					if (i < 0)
					{
						putbuff("-");
						i = -i;
					}
					if (i == 0)
						putbuff("0");
					else
					{
						while (i > 0)
						{
							s = i % 10 + '0';
							putbuff(&s);
							i /= 10;
						}
					}
					break;
				case 'i':
					i = va_arg(v_list, int);
					if (i < 0)
					{
						putbuff("-");
						i = -i;
					}
					if (i == 0)
						putbuff("0");
					else
					{
						while (i > 0)
						{
							s = i % 10 + '0';
							putbuff(&s);
							i /= 10;
						}
					}
					break;
				case '%':
					putbuff("%");
					break;
				default:
					putbuff("%");
					putbuff(p_fmt);
			}
		}
	}
	va_end(v_list);
	return (0);
}

int putbuff(char *s)
{
	static char *buff = NULL;
	static int buffsize = 0;

	int len = _strlen(s);
	if (len > buffsize)
	{
		buffsize = len + 1;
		buff = (char *) realloc(buff, buffsize);
	}
	*_strcpy(buff, s);
	return *buff;
}

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(++s));
}

int _putchar(char c)
{
	return (write(1, &c, 1));
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

/**
 * _memset - function start
 * @s: pointer to memory location
 * @b: constant bytes
 * @n: number of bytes
 * Description: function that fills memory with a constant byte.
 * Return: mutated string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _memcpy - function start
 * @dest: Pointer Destination
 * @src: Pointer source
 * @n: number of bytes to copy
 * Return: Dest pointer
 * Description: copies memory between pointers
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *new_src = (char *)src;
	char *new_dest = (char *)dest;

	for (i = 0; i < n; i++)
		new_dest[i] = new_src[i];
	return (dest);
}
