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
char *cp;
int (*ptr)(va_list);
} chartype;

int _print_char(va_list c);
int _printf(const char *format, ...);
int _putchar(char c);
/**
chartype modify_t[] =
{
	{"c", _print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{"b", print_binary},
	{"r", print_reverse},
	{"R", print_rot13},
	("%", print_percent),
	{NULL, NULL} 
}; */
#endif
