#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int reverse(char s[]);
int itoa(int n, char s[]);

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int print_binary(va_list val);
/**
 * struct print_handler - Struct print_handler
 * @spec: The spec
 * @handler: The handler
 * Description: struct for print handler
*/

typedef struct print_handler
{
	char spec;
	int (*handler)(va_list);
} print_handler_t;

int (*get_print_func(char s, print_handler_t handls[], int hands_c))(va_list);
#endif
