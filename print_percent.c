#include "main.h"
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
