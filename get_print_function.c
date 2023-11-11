#include "main.h"

print_handler_t handlers[] = {
	{'c', print_char},
	{'s', print_str},
	{'d', print_int},
	{'i', print_int},
	{'%', print_percent}
    /* {'\0', NULL}*/
};

#define HANDLERS_COUNT (sizeof(handlers) / sizeof(print_handler_t))

/**
 * get_print_func - gets the print function for a specifier
 * @s: specifier
 * Return: pointer to print function
*/
int (*get_print_func(char s))(va_list)
{
	for (int i = 0; i < HANDLERS_COUNT; i++) {
		if (handlers[i].spec == s)
		{
			return handlers[i].handler;
		}
	}
	return NULL;
}
