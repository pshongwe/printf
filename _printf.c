#include "main.h"

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
	char c;
	char *s;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		if (*format == '%')
		{
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar('0' + c);
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					while (*s != '\0')
					{
						_putchar(*s);
						s++;
						i++;
					}
					
					break;
				case '%':
					_putchar('%');
					i++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					i += 2;
					break;
			}
		}
		else
		{
			 _putchar(format[i]);
			 i++;
		}
	}
va_end(args);
return (i);
}
