#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - structure for printing various types
 * @spec: to print
 * @f: print function
 */

typedef struct print
{
char *spec;
int (*f)(va_list);
} specifier;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
