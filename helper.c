#include "main.h"


char print_char(char *c)
{
    if (*c == '\0')
        return (0);
    else
    {
        c = (char*)c;
          _putchar(*c);
        return (1);
    }
    return (*c);
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


int print_string(char *s)
{
    if (*s == '\0')
        return (0);
    else
    {
        printf("%s", s);
        return (_strelen(s) - 1);
    }
    return (*s);
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
