#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

<<<<<<< HEAD
int _printf(const char *format, ...);
int _putchar(char c);
int percent(void);
int print_string(char *sp);
int print_char(char c);
int print_int(int n);
=======
typedef struct print
{
	char *mod;
	int (*f)(va_list);
} flag;

char *_itoa(int num, char *str);
int _printf(const char *format, ...);
int _putchar(char c);
int get_func(char next, va_list arg);
int print_string(va_list list);
int print_char(va_list c);
int print_int(va_list n);
int print_float(va_list f);
int print_unsigned(va_list u);
int print_hex(va_list h);
int print_octal(va_list o);
int print_binary(va_list b);
int print_pointer(va_list p);
int print_percent(void);
int print_string_pointer(va_list sp);
int print_char_pointer(va_list cp);
int print_int_pointer(va_list np);
int print_float_pointer(va_list fp);
int print_unsigned_pointer(va_list up);
int print_hex_pointer(va_list hp);
int print_octal_pointer(va_list op);
int print_binary_pointer(va_list bp);
int print_string_string(va_list ss);
int print_char_string(va_list cs);
>>>>>>> main
#endif
