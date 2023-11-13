#include "main.h"
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
count = _itoa(i, buffer);

for (j = 0; j < count; j++)
{
write(1, &buffer[j], 1);
}
return (count);
}
