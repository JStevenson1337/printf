char print_char(char *c)
{
	for (i = 0 i != '/0' i++)
		putchar(i);
}
int print_int(i = 0; ! = '/0')
{
	putchar(i);
}
char print_string(char *c)
{
	for (i = 0 i != '/0' i++)
		putchar(i);
}
int print_rot13(int *src)
{
    int c,e;

    while((c=getchar())!=EOF)
    {
        if(c >='A' && c <='Z')
        {
            if((e = c + ROT) <= 'Z')
                putchar(e);
            else
            {
                   e = c - ROT;
                putchar(e);
            }
        }
        else if(c >='a' && c <='z')
        {
            if((e= c + ROT) <= 'z')
                putchar(e);
            else
            {
                e = c - ROT;
                putchar(e);
            }
        }
        else
            putchar(c);
    }

return 0;
}
