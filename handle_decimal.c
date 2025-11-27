#include "main.h"

/**
 * handle_decimal - Handles the %d conversion specifier
 * @args: the list of arguments from _printf
 *
 * Return: number of characters printed
 */

int handle_decimal(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	long num = n;
	char buffer[12];
	int i = 0;

	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	if (num == 0)
	{
		write(1, "0", 1);
		return (count + 1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}

	return (count);
}
