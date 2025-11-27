#include <stdarg.h>
#include <unistd.h>

/**
 * handle_string - Prints a string
 * @args: The va_list containing the string to print
 *
 * Return: Number of characters printed
 */

int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}

	return (count);
}
