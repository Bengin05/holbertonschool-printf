#include "main.h"

/**
 * handle_percent - Prints a percent sign
 *
 * Return: Number of characters printed
 */
int handle_percent(void)
{
	write(1, "%", 1);
	return (1);
}
