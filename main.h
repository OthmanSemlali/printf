#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _reverse(char s[]);
int _itoa(int n, char s[]);
void itoa_unsigned_int(unsigned int n, char s[]);
void itoa_hex(unsigned int n, char s[], int uppercase);
void itoa_octal(unsigned int n, char s[]);

int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_octal(va_list args);
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
