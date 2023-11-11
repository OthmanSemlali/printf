#include "main.h"
#include <stdio.h>

/**
 * _printf - prints a string
 * @format: string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count_chars_printed = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			int (*handler)(va_list) = get_print_func(*format);

			if (handler != NULL)
			{
				count_chars_printed += handler(args);
			}
		}
		else
		{
			write(1, format, 1);
			count_chars_printed++;
		}
		format++;
	}

	va_end(args);
	return (count_chars_printed);
}
