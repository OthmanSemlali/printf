#include "main.h"
/**
 * print_str - prints a string
 * @args: string to print
 * Return: number of characters printed
*/
int print_str(va_list args)
{
char *str;
int i;

str = va_arg(args, char *);
i = 0;

if (str == NULL)
{
str = "(null)";
}
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
return (i);
}
