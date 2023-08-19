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
	char c;

	c = va_arg(args, int);
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
	char *s;
	int j;

	s = va_arg(args, char *);
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
 * print_number - Prints an integer using putchar
 * @args: Variable argument list containing
 * @count: A pointer to the counter for characters printed
 * Return: Updated count of characters printed.
 */
int print_number(va_list args, int *count)
{
	unsigned int divisor;
	unsigned int num;

	num = va_arg(args, int);
	if ((signed int)num < 0)
	{
		num = -num;
		_putchar('-');
		(*count)++;
	}
	divisor = 1;

	while (num / divisor > 9)
		divisor *= 10;

	while ((signed int)divisor > 0)
	{
		_putchar('0' + num / divisor);
		num %= divisor;
		divisor /= 10;
		(*count)++;
	}
	return (*count);

}

/**
 * process_format - Process the format string and
 * handle the conversion specifiers.
 * @format: The format string specifying the types of arguments to be printed.
 * @args: The va_list of arguments.
 * @count: Pointer to the counter of characters printed.
 */
void process_format(const char *format, va_list args, int *count)
{
	int i;

	for (i = 0; format[i] && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					*count = print_char(args, count);
					break;
				case 's':
					*count = print_string(args, count);
					break;
				case '%':
					_putchar('%');
					(*count)++;
					break;
				case 'i':
				case 'd':
					*count = print_number(args, count);
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					*count += 2;
					break;
			}
		}
		else
		{
		_putchar(format[i]);
		(*count)++;
		}
	}
}

/**
 * _printf - printf string according to format specified
 * @format: The format string specifying the
 * types of arguments to be printed.
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{	va_list args;
	int count;

	count = 0;
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	process_format(format, args, &count);
	va_end(args);
	return (count);
}
