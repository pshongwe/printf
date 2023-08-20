#include "main.h"

/**
 * print_binary - Prints an integer in binary
 * format using putchar
 * @args: Variable argument list containing
 * the integer to be printed
 * @count: A pointer to the counter for
 * characters printed
 * Return: Updated count of characters printed.
 */
int print_binary(va_list args, int *count)
{
	unsigned int num;
	unsigned int mask;
	int leading_zeros;

	num = va_arg(args, unsigned int);
	mask = 1 << (sizeof(unsigned int) * 8 - 1);
	leading_zeros = 1;
	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (*count);
	}

	while (mask > 0)
	{
		if (num & mask)
		{
			leading_zeros = 0;
			_putchar('1');
			(*count)++;
		}
		else if (!leading_zeros)
		{
			_putchar('0');
			(*count)++;
		}
		mask >>= 1;
	}
	return (*count);
}
