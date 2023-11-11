#include "main.h"
/**
 * print_str - prints a string
 * @val: string to print
 * Return: number of characters printed
*/
int print_str(va_list val)
{
char *str = va_arg(val, char *);
int i = 0;

while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
return (i);
}

/**
 * print_char - prints a character
 * @args: character to print
 * Return: number of characters printed
*/
int print_char(va_list args)
{
char c = va_arg(args, int);

write(1, &c, 1);
return (1);
}

/**
 * print_percent - prints a percent symbol
 * @args: percent symbol to print
 * Return: number of characters printed
*/
int print_percent(va_list args)
{
(void)args;
char c = '%';

write(1, &c, 1);
return (1);
}



/**
 * print_int - prints an integer
 * @args: integer to print
 * Return: number of characters printed
*/
int print_int(va_list args)
{
int i = va_arg(args, int);
char buffer[50];
int count = itoa(i, buffer);

for (int j = 0; j < count; j++)
{
write(1, &buffer[j], 1);
}
return (count);
}

