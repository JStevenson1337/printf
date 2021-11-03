#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	int* argp = (int*)&format;
	argp =+ sizeof(format) / sizeof(int);
	argp++;
	argp++;
	argp++;


}
