#include "main.h"
/**
 * get_func - gets the function
 * @arg: format
 * @next: next
 * Return: function
 */
int get_func(char next, va_list arg)
{
	int i;

	flag functs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"b", print_binary},
		/**
		 * {"o", print_oct},
		 * {"x", print_hex},
		 * {"X", print_HEX},
		 * {"S", print_STR},
		 */
		{NULL, NULL}
	};

	for  (i = 0; functs[i].mod != NULL; i++)
	{
		if (functs[i].mod[0] == next)
			return (functs[i].f(arg));
	}
	return (0);
}
