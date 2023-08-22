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
static char buffer[BUFSIZE];
static int buffer_index, count;

buffer_index = 0;
count = 0;

if (c == '\0')
{
write(1, buffer, buffer_index);
buffer_index = 0;
}
else
{
buffer[buffer_index++] = c;
count++;

if (buffer_index >= BUFSIZE - 1) // Leave room for null terminator
{
write(1, buffer, buffer_index);
buffer_index = 0;
}
}

return (count);
}
