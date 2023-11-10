#include <unistd.h>
#include <stdarg.h>

/**
 * print_str - prints a string to stdout
 * @str: string to print
 * Return: number of chars printed
*/
int print_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/**
 * print_char - prints a character to stdout
 * @c: character to print
 * Return: number of chars printed
*/
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

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
