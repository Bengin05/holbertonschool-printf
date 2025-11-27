#include <unistd.h>
#include <stdarg.h>

/**
 * handle_decimal - Handles the %d conversion specifier
 * @args: the list of arguments from _printf
 *
 * Return: number of characters printed
 */

int handle_decimal(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	long num = n;          /* utiliser long pour gérer INT_MIN */
	char buffer[12];       /* assez pour -2147483648 */
	int i = 0;

	/* gérer le signe négatif */
	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	/* gérer le cas où num = 0 */
	if (num == 0)
	{
		write(1, "0", 1);
		return (count + 1);
	}

	/* convertir num en chaîne */
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	/* afficher dans le bon ordre */
	while (i--)
	{
		write(1, &buffer[i], 1);
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
