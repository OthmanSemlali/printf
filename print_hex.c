#include "main.h"

/**
 * print_hex - prints a hex number
 * @args: list of arguments
 * @uppercase: flag to print in uppercase
 * Return: number of characters printed
*/
int print_hex(va_list args, int uppercase)
{
unsigned int num;
char buffer[33];
char *str;
int count;

num = va_arg(args, unsigned int);
itoa_hex(num, buffer, uppercase);
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


/**
 * print_hex_lower - prints a hex number in lowercase
 * @args: hex number to print
 * Return: number of characters printed
*/
int print_hex_lower(va_list args)
{
int count;

count = print_hex(args, 0);
return (count);
}

/**
 * print_hex_upper - prints a hex number in uppercase
 * @args: hex number to print
 * Return: number of characters printed
*/
int print_hex_upper(va_list args)
{
int count;

count = print_hex(args, 1);
return (count);
}
