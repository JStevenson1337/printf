#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "fbuffers.c"
#include "domaths.c"
int _printf(const char *format, ...);

int _putchar(char c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int putbuff(char *s);

#endif /* MAIN_H */
