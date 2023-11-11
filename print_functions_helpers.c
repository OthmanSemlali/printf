#include "main.h"
/**
 * print_str - prints a string
 * @val: string to print
 * Return: number of characters printed
*/
int print_str(va_list val)
{
char *str;
int i;

str = va_arg(val, char *);
i = 0;

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
char c;

c = va_arg(args, int);

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
char c;

(void)args;
c = '%';

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
int i, j, count;
char buffer[50];

i = va_arg(args, int);
count = itoa(i, buffer);

for (j = 0; j < count; j++)
{
write(1, &buffer[j], 1);
}
return (count);
}

