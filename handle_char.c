#include "main.h"

/**
 * handle_char - Prints a character
 * @args: Argument list containing the character
 *
 * Return: Number of characters printed
 */
int handle_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);

	return (1);
}
