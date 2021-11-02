#include "cands.c"
#include <stdlib.h>
/**
 * _memset - function start
 * @s: pointer to memory location
 * @b: constant bytes
 * @n: number of bytes
 * Description: function that fills memory with a constant byte.
 * Return: mutated string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _memcpy - function start
 * @dest: Pointer Destination
 * @src: Pointer source
 * @n: number of bytes to copy
 * Return: Dest pointer
 * Description: copies memory between pointers
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *new_src = (char *)src;
	char *new_dest = (char *)dest;

	for (i = 0; i < n; i++)
		new_dest[i] = new_src[i];
	return (dest);
}
int putbuff(char *s)
{
	static char *buff = NULL;
	static int buffsize = 0;

	int len = _strlen(s);
	if (len > buffsize)
	{
		buffsize = len + 1;
		buff = (char *) realloc(buff, buffsize);
	}
	_strcpy(buff, s);
	return *buff;
}
