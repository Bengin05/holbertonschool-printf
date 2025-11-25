
edcdvdv
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
 1ff5158 (creation of the _printf.c file / handle-char coding)
