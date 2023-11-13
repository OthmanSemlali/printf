#include "main.h"
/**
 * print_binary - prints a binary number
 * @args: binary number to print
 * Return: number of characters printed
*/

int print_binary(va_list args)
{
	unsigned int num;
	char buffer[33];
	int i;
	int count;

	num = va_arg(args, unsigned int);
	i = 31;
	count = 0;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (num)
	{
		buffer[i--] = (num & 1) + '0';
		num >>= 1;
	}
	i++;
	while (i < 32)
	{
		write(1, &buffer[i], 1);
		i++;
		count++;
	}
	return (count);
}
