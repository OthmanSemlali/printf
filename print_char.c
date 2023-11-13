#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 * Return: number of characters printed
*/
int print_char(va_list args)
{
char c;

c = va_arg(args, int);

write(1, &c, 1);
return (1);
}
