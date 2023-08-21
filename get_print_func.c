#include "main.h"

/**
 * get_print_func - function pointer that selects the correct function
 * @s: the given chars
 * Return: pointer to the function
 */
int (*get_print_func(char *s))(va_list, int *)
{
    static const printer_t funcs[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {"i", print_number},
        {"d", print_number},
        {"b", print_binary},
        {"r", print_reverse},
        {NULL, print_else}
    };
    int i = 0;

    while (funcs[i].printer)
    {
        if (_strcmp(funcs[i].printer, s) == 0)
            return funcs[i].f;
        i++;
    }

    return NULL;
}

