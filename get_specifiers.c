#include "main.h"

/**
 * get_spec - function that gets specifier functions
 *
 * @s: string to be read to search for a specifiers
 *
 * Return: returns the function specifier, else NULL
 */
int (*get_spec(const char *s))(va_list args)
{
	specifier_t sp[] = {
		{'s', printStr}, {'c', printChar},
		{'%', printPercent}, {'d', print_number},
		{'i', print_number}, {'u', printUnsigned},
		{'b', printBinary}, {'o', printOctal},
		{'x', printHexadec}, {'X', printHexaDec},
		{'\0', NULL}
	};
	int i = 0;

	while (i < 12)
	{
		if (*s == sp[i].format)
		{
			return (sp[i].func);
		}
		i++;
	}
	return (NULL);
}
