#include <stdarg.h>
#include <unistd.h>

/**
 * handle_char - Prints a character
 * @args: The va_list containing the character to print
 *
 * Return: Number of characters printed (1)
 */
int handle_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);

	return (1);
}
#include "main.h"

/**
 * handle_int - Prints an integer (%d and %i)
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int handle_int(va_list args)
{
	int n, count = 0;
	char buffer[12];
	int i = 0;
	long num;

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
