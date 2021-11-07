#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

<<<<<<< HEAD

/**
 * struct print - structure for printing various types
 * @format: to print
 * @f: print function
 */

typedef struct print_t
{
	char p_fmt;
	int (*f)(va_list *);
} print_t;
=======
>>>>>>> M2

int print_char(va_list *args);
int _printf(const char *format, ...);
int _putchar(char c);
<<<<<<< HEAD
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char* _iota(int num, char *str);
int (* f_func(char spec))(va_list *args);
=======
int percent(void);
int print_string(char *sp);
int print_char(char c);
int print_int(int n);
>>>>>>> M2

#endif
