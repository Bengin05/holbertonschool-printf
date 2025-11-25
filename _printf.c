<<<<<<< HEAD
<<<<<<< HEAD
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

edcdvdv
=======
>>>>>>> 1ff5158 (creation of the _printf.c file / handle-char coding)
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
<<<<<<< HEAD
 1ff5158 (creation of the _printf.c file / handle-char coding)
=======
>>>>>>> 81a22fd (Modification of the _printf.c file and creation of the handle_string.c file because I made a mistake during the merge.)
=======
>>>>>>> 1ff5158 (creation of the _printf.c file / handle-char coding)
