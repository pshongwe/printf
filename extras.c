#include "main.h"

/**
 * print_percent - Prints the character '%' using putchar
 * @args: Variable argument list (unused)
 * Return: Updated count of characters printed.
 */
int print_percent(void *args)
{
    (void)args;
    _putchar('%');
    return (1);
}

/**
 * print_else - Prints a character followed by '%'
 * @args: Variable argument list containing the character to be printed
 * Return: Updated count of characters printed.
 */
int print_else(void *args)
{
    char c = *(char *)args;
    _putchar(c);
    _putchar('%');
    return (2);
}
