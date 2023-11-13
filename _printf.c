#include "main.h"
/**
 * _printf - prints a string
 * @format: string to print
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
print_handler_t handls[] = {
{'c', print_char}, {'s', print_str}, {'d', print_int}, {'i', print_int},
{'%', print_percent}, {'b', print_binary}, {'u', print_unsigned},
{'x', print_hex_lower}, {'X', print_hex_upper}, {'o', print_octal},
{'\0', NULL}
};
	int handls_c = sizeof(handls) / sizeof(print_handler_t);
	int count_chars_printed;
	int (*handler)(va_list);
	va_list args;

	va_start(args, format);
	count_chars_printed = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			handler = get_print_func(*format, handls, handls_c);

			if (handler != NULL)
			{
				count_chars_printed += handler(args);
				/*if (handler != print_percent)
				{
					va_arg(args, int);
				}*/
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
