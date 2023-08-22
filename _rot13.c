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
char *rot13(va_list args)
{
char *found, *str;
char *input;
char *output;
int i;

str = va_arg(args, char *);
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
return (str);
}
