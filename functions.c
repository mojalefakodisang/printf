#include "main.h"

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

		puts("(null)");
		return (6);
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
