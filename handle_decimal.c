#include "main.h"

/**
 * handle_decimal - Prints a signed integer
 * @args: Argument list containing the integer
 *
 * Return: Number of characters printed
 */
int handle_decimal(va_list args)
{
	int n;
	long num;
	char buffer[12];
	int i = 0;
	int count = 0;

	n = va_arg(args, int);
	num = n;

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
