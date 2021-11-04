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

typedef struct print_t
{
	char p_fmt;
	void (*f)(va_list);
} print_t;


int _printf(const char *format, ...);
int _putchar(char c);
int _strelen(char *s);
char *_strcpy(char *dest, char *src);
char* _iota(int num, char *str);

#endif
