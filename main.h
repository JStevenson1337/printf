#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - structure for printing various types
 * @format: to print
 * @f: print function
 */

typedef struct print
{
char *chartype;
int (*ptr)(va_list);
} chartype;

int _printf(const char *format, ...);
int _putchar(char c);
#endif
