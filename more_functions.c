#include "main.h"

/**
 * _putchar - prints a char
 * @c: char
 * Return: int
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string
 * @str: string
 * Return: int
 */
int _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (i);
}
/**
 * _puts_recursion - prints a string
 * @str: string
 * Return: int
 */
int _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return (1);
	}
	_putchar(*str);
	return (_puts_recursion(str + 1));
}
/**
 * _strlen - prints a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: int
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: int
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncmp - compares two strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: int
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0;

	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/**
 * _strchr - finds a character in a string
 * @s: string
 * @c: char
 * Return: int
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
/**
 * _strrchr - finds a character in a string
 * @s: string
 * @c: char
 * Return: int
 */
char *_strrchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == c)
			j = i;
		i--;
	}
	return (s + j);
}
/**
 * _strspn - finds a character in a string
 * @s: string
 * @accept: string
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}
/**
 * _strpbrk - finds a character in a string
 * @s: string
 * @accept: string
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/**
 * _strstr - finds a character in a string
 * @haystack: string
 * @needle: string
 * Return: int
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
/**
 * _strtok - splits a string into tokens
 * @str: string
 * @delim: string
 * Return: int
 */
char *_strtok(char *str, char *delim)
{
	static char *s = NULL;
	char *token;
	int i = 0, j = 0;

	if (str != NULL)
		s = str;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && _strchr(delim, s[i]) != NULL)
		i++;
	if (s[i] == '\0')
	{
		s = NULL;
		return (NULL);
	}
	token = s + i;
	while (s[i] != '\0' && _strchr(delim, s[i]) == NULL)
		i++;
	if (s[i] != '\0')
		s[i] = '\0';
	return (token);
}
/**
 * _strtok_r - splits a string into tokens
 * @str: string
 * @delim: string
 * @save_ptr: string
 * Return: int
 */	
char *_strtok_r(char *str, char *delim, char **save_ptr)
{
	char *token;
	int i = 0, j = 0;

	if (str != NULL)
		*save_ptr = str;
	if (*save_ptr == NULL)
		return (NULL);
	while ((*save_ptr)[i] != '\0' && _strchr(delim, (*save_ptr)[i]) != NULL)
		i++;
	if ((*save_ptr)[i] == '\0')
	{
		*save_ptr = NULL;
		return (NULL);
	}
	token = *save_ptr + i;
	while ((*save_ptr)[i] != '\0' && _strchr(delim, (*save_ptr)[i]) == NULL)
		i++;
	if ((*save_ptr)[i] != '\0')
		(*save_ptr)[i] = '\0';
	*save_ptr = *save_ptr + i + 1;
	return (token);
}
/**
 * _strdup - duplicates a string
 * @str: string
 * Return: int
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * (_strlen(str) + 1));
	if (dup == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}	
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: int
 */	
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: int
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
