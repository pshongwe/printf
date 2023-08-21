#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_percent(va_list args, int *count)
{
    _putchar('0' + va_arg(args, int));
    (*count)++;
    return (*count);
}

int print_else(va_list args, int *count)
{

_putchar('%');
_putchar('0' + va_arg(args, int));
*count += 2;
return (*count);
}
