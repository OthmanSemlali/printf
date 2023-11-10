#include <unistd.h>
#include <stdarg.h>
#include "helpers.c"

/**
 * _printf - produces output according to a format
 * @format: format
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count_chars_printed = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					{
						count_chars_printed += print_char(va_arg(args, int));
						break;
					}
				case 's':
					{
						count_chars_printed += print_str(va_arg(args, char *));
						break;
					}
				case '%':
					{
						count_chars_printed += print_char('%');
						break;
					}
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
