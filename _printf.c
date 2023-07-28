#include "main.h"
/**
 * _printf - Prints formats
 * @format: data type to be printed
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0, True = 0;
	int (*spec_func)(va_list) = NULL;

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
			spec_func = get_spec(format);
			if (spec_func)
			{
				True = 1;
				counter += spec_func(args);
			}
			if (!True)
			{
				putchar('%');
				putchar(*format);
				counter += 2;
			}
			True = 0;
		}
		else
		{
			putchar(*format);
			counter++;
		}
		++format;
	}
	va_end(args);
	return (counter);
}

