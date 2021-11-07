#include "main.h"


int print_char(va_list *args)
{
    _putchar(va_arg(*args, int));
    return (1);
}

int print_int(int *i)
{
    i = (int*)i;
    if (*i == 0)
        return (0);
    else
    {
        return (1);
    }
    return (*i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_string(char *s)
{
    if (*s == '\0')
        return (0);
    else
    {
        printf("%s", s);
        return (_strlen(s) - 1);
    }
    return (*s);
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
/*
char rot13(char c)
{
    if (c >= 'a' && c <= 'm')
        return ()c + 13);
    else if (c >= 'A' && c <= 'M')
        return (c + 13);
    else if (c >= 'n' && c <= 'z')
        return ()c - 13);
    else if (c >= 'N' && c <= 'Z')
        return (c - 13);
    else
        return (*c);
}
*/

/*
{
int print_float(float *f)
    if (*f == 0)
        return (0);
    else
    {
        printf("%f", *f);
        return (1);
    }
    return (*f);
}
*/
