#include "main.h"

/**
 * reverse - reverses a string
 * @s: string to reverse
 * Return: length of string
*/

int reverse(char s[])
{
int len = 0;

while (s[len] != '\0')
{
len++;
}

int start = 0, end = len - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
start++;
end--;
}
return (len);
}

/**
 * itoa - converts an integer to a string
 * @n: integer to convert
 * @s: string to convert to
 * Return: length of string
*/
int itoa(int n, char s[])
{
int i = 0;
int sign = n;

if (sign < 0)
n = -n;
do {
s[i++] = n % 10 + '0';
} while ((n /= 10) > 0);

if (sign < 0)
{
s[i++] = '-';
}
s[i] = '\0';

int len = reverse(s);

return (len);
}
