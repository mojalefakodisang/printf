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

	str = va_arg(args, char *);
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
 * @args:number of arguments
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
 * @args: arguments
 * Return: no return
 */
int print_number(va_list args)
{
	int n = va_arg(args, int), count = 0, numDigits = 0, div = 1, digit, i, temp;

	if (n == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		if (n < 0)
		{
			putchar('-');
			if (n == INT_MIN)
			{
				putchar('2');
				n = -(n + 2000000000);
				count++;
			}
			n = -n;
			count++;
		}
		temp = n;
		while (temp != 0)
		{
			temp = temp / 10;
			numDigits++;
		}
		for (i = 1; i < numDigits; i++)
			div = div * 10;
		while (div != 0)
		{
			digit = n / div;
			putchar(digit + '0');
			n = n % div;
			div /= 10;
			count++;
		}
	}
	return (count);
}
