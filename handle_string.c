#include "main.h"

/**
 * handle_string - Prints a string
 * @args: Argument list containing the string
 *
 * Return: Number of characters printed
 */
int handle_string(va_list args)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}
