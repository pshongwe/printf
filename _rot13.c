#include "main.h"
#include <stdio.h>

/**
* _strchr - finds a char in a string
* @s: string
* @c: char
* Return: pointer to char in string
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return s;
s++;
}

return (NULL);
}

/**
* rot13 - encode string using rot13
* @args: va_list containing the string to be encoded
* Return: count of characters printed
*/
int rot13(va_list args)
{
char *str;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, count = 0;

str = va_arg(args, char *);
if (str == NULL)
str = "(null)";

for (i = 0; str[i] != '\0'; i++)
{
char *found = _strchr(input, str[i]);
if (found)
{
str[i] = output[found - input];
}
}

while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
return (count);
}
