#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char* _iota(int num, char *str);
int _putchar(char c);
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
    char *s;
    unsigned int i;

    va_list v_list;
    va_start(v_list, format);

    if (format == NULL)
        return (-1);

    p_fmt = (char *)format;
	for (i = 0; *p_fmt != '\0'; i++)
	{
		if (*p_fmt == '%')
		{
			putbuff(p_fmt++);
			switch (*p_fmt)
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
		else
		{
			putbuff(p_fmt++);
		}
		p_fmt++;
    }
	va_end(v_list);
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


int putbuff(char *s)
{
    char *buff = NULL;
	int buffsize = 0;

    int len = _strlen(s);
    if (len > buffsize)
    {
        buffsize = len + 1;
        buff = (char *) realloc(buff, buffsize);
    }
    _strcpy(buff, s);
	write(1, buff, len);
    return (*buff);
}

int _putchar(char c)
{
    return (write(1, &c, 1));
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

