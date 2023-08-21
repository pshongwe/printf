#include "main.h"

int (*get_print_func(const char *s))(void *)
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
    int j = 0;

    while (funcs[i].printer)
    {
        j = 0;
        while (funcs[i].printer[j] == s[j] && s[j] != '\0')
            j++;

        if (funcs[i].printer[j] == '\0' && s[j] == '\0')
            return funcs[i].f;

        i++;
    }

    return (NULL);
}
