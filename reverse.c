#include "main.h"

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
