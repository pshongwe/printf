#include "main.h"

/**
 * print_percent - Prints the character '%' using putchar
 * @args: Variable argument list (unused)
 * Return: Updated count of characters printed.
 */
int print_percent(va_list args)
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
int print_else(va_list args)
{
char c = va_arg(args, int);
_putchar('%');
_putchar(c);
return (2);
}

/**
* handle_pointer - Handles printing of pointer addresses.
* @args: Variable argument list containing the pointer to be printed.
* Return: The number of characters printed.
*/
int handle_pointer(va_list args)
{
void *ptr;
char hex_digits[] = "0123456789abcdef";
char buffer[16];
int i, count;

ptr = va_arg(args, void *);  
count = 0;
_putchar('0');
_putchar('x');

for (i = sizeof(void *) * 2 - 1; i >= 0; i--)
{
buffer[i] = hex_digits[(uintptr_t)ptr & 0xf];
ptr = (void *)((uintptr_t)ptr >> 4);
}

for (i = 0; i < sizeof(void *) * 2; i++)
{
_putchar(buffer[i]);
count++;
}

return (count);
}

