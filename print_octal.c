#include "main.h"

/**
 * print_octal - prints an octal number
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
unsigned int num;
char buffer[33];
char *str;
int count;

num = va_arg(args, unsigned int);
str = buffer;
count = 0;

itoa_octal(num, buffer);

while (*str != '\0')
{
write(1, str, 1);
str++;
count++;
}

return (count);
}
