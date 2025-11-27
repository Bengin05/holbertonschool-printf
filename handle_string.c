#include "main.h"
<<<<<<< HEAD
<<<<<<< HEAD
=======
#include <unistd.h>
>>>>>>> 81a22fd (Modification of the _printf.c file and creation of the handle_string.c file because I made a mistake during the merge.)
=======
#include <unistd.h>
>>>>>>> 81a22fd (Modification of the _printf.c file and creation of the handle_string.c file because I made a mistake during the merge.)

/**
 * handle_string - Prints a string
 * @args: The va_list containing the string to print
 *
 * Return: Number of characters printed
 */
int handle_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

	return (i);
}
