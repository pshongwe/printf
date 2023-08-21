#include "main.h"

/**
 * print_reverse - Prints a string in reverse order using putchar
 * @args: Variable argument list containing additional arguments
 * Return: Updated count of characters printed.
 */
int print_reverse(va_list args)
{
    char *input = va_arg(args, char *);
    int i, length, count;

    length = _strlen(input);
    count = 0;

    for (i = length - 1; i >= 0; i--)
    {
        _putchar(input[i]);
        count++;
    }

    return count;
}
