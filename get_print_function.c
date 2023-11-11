#include "main.h"

/**
 * get_print_func - gets the print function for a specifier
 * @s: specifier
 * @handls: array of handler structs
 * @handls_c: number of handlers
 * Return: pointer to print function
*/
int (*get_print_func(char s, print_handler_t handls[], int handls_c))(va_list)
{
int i;

for (i = 0; i < handls_c; i++)
{
if (handls[i].spec == s)
{
return (handls[i].handler);
}
}
return (NULL);
}
