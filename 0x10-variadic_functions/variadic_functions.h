#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct datstruct - The structure
 *
 * @dat: Data type
 * @f: The function
 */
typedef struct datstruct
{
	char *dat;
	void (*f)();
} funstruct;

void op_char(va_list args);

void op_int(va_list args);

void op_float(va_list args);

void op_string(va_list args);

#endif
