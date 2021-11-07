char *_itoa(int num, char *str)
{
	int i = 0;
	char isNeg;

	if (num < 0)
	{
		isNeg = 1;
		num = num * -1;
	}
	while (num > 0)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	if (isNeg)
	{
		str[i] = '-';
		str[i + 1] = '\0';
	}
	return (str);


}


// print_int(va_arg(args, int));
// print_int(va_arg(args, int));
// print_char(va_arg(args, int));
// print_string(va_arg(args, char *));
// percent(va_arg(args, int));
