#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char *_itoa(int value, char *newString);
int _putchar(char c);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int putbuff(char *s);
char *_memset(char *s, char b, unsigned int n);
/**
 *
 *
 */
int _printf(const char *format, ...)
{
    char *p_fmt, *buffer;
    char *s;
    unsigned int i;

    va_list v_list;
    va_start(v_list, format);

    if (format == NULL)
        return (-1);

    p_fmt = (char *)format;
	_memset(buffer, 0, 0);
	while (*p_fmt != '\0')
	{
		if (*p_fmt != '%')
		{
			_putchar(*p_fmt);
			p_fmt++;
		}
		else
		{
			p_fmt++;
			switch (*p_fmt)
			{
			case 'c':
				i = va_arg(v_list, int);
				_putchar(i);
				break;
			case 's':
				s = va_arg(v_list, char *);
				_strcpy(buffer, s);
				break;
			case '%':
				_putchar('%');
				break;
			case 'd':
				i = va_arg(v_list, int);
				_itoa(i, buffer);
				break;
			case 'i':
				i = va_arg(v_list, int);
				_itoa(i, buffer);
				break;
			default:
				break;
			}
		}
	}
	va_end(v_list);
	return (0);
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
  char* buffer;

    buffer = (char* )malloc( 80 );
    if( buffer == NULL )
	{
	    free( buffer );
    }
	return (*buffer);
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

char *_itoa(int value, char *newString)
{
	int i = 0;
	int n = value;
	int r;

	newString[11] =  '\0';
	if (n < 0)
	{
		n = -n;
	}
	while (n)
	{
		r = n % 10;
		newString[11 - i - 1] = r + 48;
		n = n / 10;
		i++;
	}
	if (value < 0)
	{
		i++;
		newString[11 - i] = '-';
	}
	return (newString + 11 - i);
}
