#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: list of arguments
 * Return: the number of characters printed
*/
int print_unsigned(va_list args)
{
unsigned int num;
char buffer[33];
char *str;
int count;

num = va_arg(args, unsigned int);
itoa_unsigned_int(num, buffer);
str = buffer;
count = 0;

while (*str != '\0')
{
write(1, str, 1);
str++;
count++;
}

return (count);
}
