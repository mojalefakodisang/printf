#include "main.h"

/**
 * printStr - prints string depanding on number of arguments
 *
 * @args: number of arguments
 *
 * Return: returns 1 on success
 */
int printStr(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		putchar(*str++);
		i++;
	}
	return (i);
}
/**
 * printChar - prints character depending on arguments
 *
 * @args: number of arguments
 *
 * Return: returns 1 on success
 */
int printChar(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	putchar(ch);
	return (1);
}
/**
 * printPercent - prints percent
 *
 * @args:number of arguments
 *
 * Return: prints % on success
 */
int printPercent(va_list args)
{
	char ch = '%';

	(void)args;
	putchar(ch);
	return (1);
}
/**
 *print_number - entry point

 *Descrition: function that prints an integer
 *@n: the number to be printed
 *@counter: the number of printed elements

 * Return: no return
 */
void print_number(int n, int *counter)
{
	unsigned int x = n;

	if (n < 0)
	{
		putchar('-');
		x = -x;
		(*counter)++;
	}
	if ((x / 10) > 0)
		print_number(x / 10, counter);
	putchar((x % 10) + '0');
	(*counter)++;
}
/**
 * printCus - prints custom specifiers
 *
 * @args: number of arguments
 *
 * Return: number of characters
 */
int printCus(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	putchar('%');
	if (*str != '\0')
	{
		putchar(*str);
		count += 2;
	}
	else
	{
		putchar(*str);
		count += 1;
	}

	return (count);
}
