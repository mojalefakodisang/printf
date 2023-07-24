#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n, int *count);
int printStr(va_list args);
int printChar(va_list args);

#endif
