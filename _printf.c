#include "main.h"

/**
 * _printf - Produces output according to a format string
 * @format: A character string containing normal characters
 *          and conversion specifiers
 *
 * Description: Parses the format string and calls the appropriate handle
 * function for each conversion
 * specifier (%c, %s, %%, %d, %i). Counts
 * and returns the total number of characters
 * printed (excluding the null byte).
 *
 * Return: The number of characters printed, or -1 on failure
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += handle_char(args);
			else if (format[i] == 's')
				count += handle_string(args);
			else if (format[i] == '%')
				count += handle_percent();
			else if (format[i] == 'd')
				count += handle_decimal(args);
			else if (format[i] == 'i')
				count += handle_integer(args);
			else
				count += write(1, &format[i], 1);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
