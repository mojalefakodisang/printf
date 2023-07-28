#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>

/* Macros */


/**
 * struct frmt - takes in characters and a pointer to a function
 *
 * @format: input string of the function
 * @func: pointer to a function
 *
 */
typedef struct frmt
{
	char format;
	int (*func)(va_list);
} specifier_t;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_number(va_list args);
int printStr(va_list args);
int printChar(va_list args);
int printPercent(va_list args);
int printBinary(va_list args);
int printOctal(va_list args);
int printHexadec(va_list args);
int printHexaDec(va_list args);
int printCustom(va_list args);
int printAddress(va_list args);

/* Helper functions */
int (*get_spec(const char *s))(va_list args);
int get_print_func(char *s, va_list args);
int printUnsigned(va_list args);
void print_custom_char(char ch);

#endif
