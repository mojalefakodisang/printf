#include "main.h"
/**
 * _printf - Prints formats
 * @format: data type to be printed
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int I, counter = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			else if (*format == 'c')
				counter += printChar(args);
			else if (*format == 's')
				counter += printStr(args);
			else if (*format == '%')
				counter += printPercent(args);
			else if (*format == 'i' || *format == 'd')
			{
				I = va_arg(args, int);
				print_number(I, &counter);
			}
			else
			{
				putchar('%');
				putchar(*format);
				counter += 2;
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
