#include <stdlib.h>
#include <stdio.h>

#include <limits.h>
// int main (int argc, char *argv[])
// {
//   int ret;
//   ret = print("%c %d %o %x %s\n", 'A', 10, 100, 1000, "Hello from printf!");
//   printf("printf returns %d bytes\n", ret);
//   return 0;
// }





/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    

    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("Length:[%d, %i]\n", len2, len2);
    printf("Negative:[%d]\n", -762534);
    printf("Character:[%c]\n", 'H');
    printf("String:[%s]\n", "I am a string !");
    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len2);
    return (0);
}

