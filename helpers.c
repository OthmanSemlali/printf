#include <unistd.h>
#include "main.h"
/**
 * print_str - prints a string to stdout
 * @str: string to print
 * Return: number of chars printed
*/
int print_str(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/**
 * print_char - prints a character to stdout
 * @c: character to print
 * Return: number of chars printed
*/
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

