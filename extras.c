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

/**
 * handle_custom_string - Handles the custom string specifier %S
 * @args: Variable argument list containing the string to be printed
 * Return: Count of characters printed
 */
int handle_custom_string(va_list args)
{
char *s, *hex_digits;
int count, i;
unsigned char value;

s = va_arg(args, char *);
count = 0;
if (s == NULL)
s = "(null)";

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 32 && s[i] < 127)
{
_putchar(s[i]);
count++;
}
else
{
_putchar('\\');
_putchar('x');
if ((unsigned char)s[i] < 16)
_putchar('0');
count += 3;

value = (unsigned char)s[i];
hex_digits = "0123456789ABCDEF";
_putchar(hex_digits[value >> 4]);
_putchar(hex_digits[value & 0xF]);
}
}

return (count);
}
