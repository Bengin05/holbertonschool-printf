#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing characters and format specifiers
 *
 * Return: Number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);

			if (format[i] == 'c')
				count += handle_char(args);
			else if (format[i] == 's')
				count += handle_string(args);
			else if (format[i] == '%')
				count += handle_percent();
			else if (format[i] == 'i' || format[i] == 'd')
				count += handle_decimal(args);
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
			}
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
