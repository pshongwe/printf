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
int i;

while (1)
{
i = *s++;

if (i == c)
return (s - 1);

if (i == 0)

return (NULL);
}
}

/**
* rot13 - encode string using rot13
* @str: input string
* Return: result string
*/
int rot13(va_list args)
{
char *found, *str;
char *input;
char *output;
int i, count;

str = va_arg(args, char *);
if (str == NULL)
str = "(null)";

count = 0;
input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
found = _strchr(input, str[i]);
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
