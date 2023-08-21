#include "main.h"

/**
 * print_reverse - Prints a string in reverse order using putchar
 * @args: Variable argument list containing additional arguments
 * @count: A pointer to the counter for characters printed
 * Return: Updated count of characters printed.
 */
int print_reverse(va_list args, int *count)
{
char *input;
int i, length;

input = va_arg(args, char *);
length = _strlen(input);

for (i = length - 1; i >= 0; i--)
{
_putchar(input[i]);
(*count)++;
}
return (*count);
}
