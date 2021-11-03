#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
			p_fmt++;
			switch (*p_fmt)
			{
			case 'c':
				_putchar(va_arg(v_list, int));
				break;
			case 's':
				_strcpy(s, va_arg(v_list, char *));
				break;
			case 'd':
				_putchar(va_arg(v_list, int));
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
			_putchar(*p_fmt);
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
	printf("%s", buff);
    return *buff;
}

int _putchar(char c)
{
    return (write(1, &c, 1));
}


int main()
{
  putbuff("this is a test");
  return 0;
}
