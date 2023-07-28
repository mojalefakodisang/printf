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
	int n = va_arg(args, int);
	int count = 0, numDigits = 0, temp, divisor = 1, digit, i;

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
			n = -n;
			count++;
		}
		temp = n;
		numDigits = 0;
		while (temp != 0)
		{
			temp /= 10;
			numDigits++;
		}
		for (i = 1; i < numDigits; i++)
		{
			divisor *= 10;
		}
		while (divisor != 0)
		{
			digit = n / divisor;
			putchar(digit + '0');
			n %= divisor;
			divisor /= 10;
			count++;
		}
	}
	return (count);
}
