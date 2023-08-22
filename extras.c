#include "main.h"
#include <stdint.h>

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
uintptr_t uintptr;
int count;

ptr = va_arg(args, void *);
uintptr = (uintptr_t)ptr;
count = 0;
_putchar('0');
_putchar('x');

if (uintptr == 0)
{
_putchar('0');
count += 3;
}
else
{
char *hexDigits;
char hexRepresentation[16];
int i;

hexDigits = "0123456789abcdef";
for (i = 0; uintptr > 0; i++)
{
hexRepresentation[i] = hexDigits[uintptr % 16];
uintptr /= 16;
}

for (i--; i >= 0; i--)
{
_putchar(hexRepresentation[i]);
count++;
}
}
return (count);
}

