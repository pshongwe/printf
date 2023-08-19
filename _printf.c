#include "main.h"
#include <stdio.h>

/**
 * _printf - printf string according to format specified
 * @format: format specifier
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i);
}

void switch_print()
{

}
