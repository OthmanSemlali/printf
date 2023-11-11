#include "main.h"

/**
 * reverse - reverses a string
 * @s: string to reverse
 * Return: length of string
*/

int reverse(char s[])
{
int len;
int start;
int end;
char temp;

len = 0;

while (s[len] != '\0')
{
len++;
}

start = 0;
end = len - 1;

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
int i;
int sign;
int len;

i = 0;
sign = n;

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

len = reverse(s);

return (len);
}
