#include "main.h"

/**
 * printBinary - converts decimal to binary
 *
 * @args: arguments
 *
 * Return: returns number of characters
 */
int printBinary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, count = 0;
	unsigned int binary[64];

	i = 0;
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	if (i == 0)
	{
		putchar('0');
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary[j] + '0');
		count++;
	}
	return (count);
}

/**
 * printOctal - converts decimal to octal
 *
 * @args: arguments
 *
 * Return: returns number of characters
 */
int printOctal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, count = 0;
	unsigned int octal[64];

	i = 0;
	if (n == 0)
	{
		putchar('0');
	}
	while (n > 0)
	{
		octal[i] = n % 8;
		n /= 8;
		i++;
	}
	if (i == 0)
	{
		putchar(n);
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(octal[j] + '0');
		count++;
	}
	return (count);
}
/**
 * printHexadec - converts decimal to lowercase hexadecimal
 *
 * @args: arguments
 *
 * Return: returns number of characters
 */
int printHexadec(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, count = 0;
	unsigned int hexadec[64];

	i = 0;
	if (n == 0)
	{
		putchar('0');
	}
	while (n > 0)
	{
		hexadec[i] = n % 16;
		n /= 16;
		i++;
	}
	if (i == 0)
	{
		putchar(n);
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (hexadec[j] >= 10)
		{
			putchar('a' + (hexadec[j] - 10));
			count++;
		}
		else
		{
			putchar(hexadec[j] + '0');
			count++;
		}
	}
	return (count);
}
/**
 * printHexaDec - converts decimal to uppercase hexadecimal
 *
 * @args: arguments
 *
 * Return: returns number of characters
 */
int printHexaDec(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, count = 0;
	unsigned int hexaDec[64];

	i = 0;
	if (n == 0)
	{
		putchar('0');
	}
	while (n > 0)
	{
		hexaDec[i] = n % 16;
		n /= 16;
		i++;
	}
	if (i == 0)
	{
		putchar(n);
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (hexaDec[j] >= 10)
		{
			putchar('A' + (hexaDec[j] - 10));
			count++;
		}
		else
		{
			putchar(hexaDec[j] + '0');
			count++;
		}
	}
	return (count);
}
