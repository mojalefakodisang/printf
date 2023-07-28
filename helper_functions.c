#include "main.h"

/**
 * printUnsigned - prints an unsigned integer from input arguments
 *
 * @args: arguments
 *
 * Return: returns number of arguments
 */
int printUnsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0, j = 0, count = 0;
	int digits[64];

	if (n == 0)
	{
		putchar('0');
		count++;
	}
	else
	{
		while (n > 0)
		{
			digits[i] = n % 10;
			n /= 10;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar(digits[j] + '0');
			count++;
		}
	}
	return (count);
}

/**
 * print_custom_char - prints custom conversion specifiers
 *
 * @ch: character
 *
 * Return: no return value
 */
void print_custom_char(char ch)
{
	char hexDec[] = "0123456789ABCDEF";

	if (ch < 32 || ch >= 127)
	{
		putchar('\\');
		putchar('x');
		putchar(hexDec[(ch >> 4) & 0xF]);
		putchar(hexDec[ch & 0xF]);
	}
	else
	{
		putchar(ch);
	}
}
