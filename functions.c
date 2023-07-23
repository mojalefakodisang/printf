#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * printStr - prints string depanding on number of arguments
 *
 * @args: number of arguments
 * @count: counts number of characters
 *
 * Return: returns 1 on success
 */
int printStr(va_list args, int *count)
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
	*count += i;
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
 *print_number - entry point
 *Descrition: function that prints an integer
 *@n: the number to be printed
 *@counter: the number of printed elements
 * Return: no return
 */
int print_num(va_list args, int n, int *counter)
{
	unsigned int x = n;

	if (n < 0)
	{
		putchar('-');
		x = -x;
		(*counter)++;
	}
	if ((x / 10) > 0)
		print_num(args, x / 10, counter);
	putchar((x % 10) + '0');
	(*counter)++;
	return (*counter);
}
