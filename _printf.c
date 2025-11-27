#include <stdarg.h>
#include <unistd.h>

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
