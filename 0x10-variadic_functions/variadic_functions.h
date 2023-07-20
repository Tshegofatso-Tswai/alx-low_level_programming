#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct format_specifier - Struct format_specifier
 * @spec: The format specifier
 * @func: The function associated
 *
 * Description: A structure that maps format specifiers
 * to the corresponding functions.
 */
typedef struct format_specifier
{
	char *spec;
	void (*func)(va_list);
} format_specifier_t;

void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

