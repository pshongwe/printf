#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * print_char - Prints a character and increments the count.
 * @args: Variable argument list containing
 * the character to be printed.
 * @count: Pointer to the counter tracking printed characters.
 * Return: Updated count of characters printed.
 */
int print_char(va_list args, int *count)
{
	char c = va_arg(args, int);
	
	*count += _putchar(c);
	return (*count);
}

/**
 * print_string - Prints a string and increments the count.
 * @args: Variable argument list containing
 * the string to be printed.
 * @count: Pointer to the counter tracking printed characters.
 * Return: Updated count of characters printed.
 */
int print_string(va_list args, int *count)
{
	char *s = va_arg(args, char *);
	int j;
	
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
		(*count)++;
	}
	return (*count);
}

/**
 * _printf - printf string according to format specified
 * @format: The format string specifying the
 * types of arguments to be printed.
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, count = 0;
	
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count = print_char(args, &count);
					break;
				case 's':
					count = print_string(args, &count);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
