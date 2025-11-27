#include "main.h"
#include <unistd.h>

/**
 * handle_percent - Prints the '%' character to standard output.
 *
 * This function uses the write system call to output the '%' symbol
 * to file descriptor 1 (stdout). It is typically used in a custom
 * printf implementation when '%%' needs to be displayed.
 *
 * Return: The number of characters written (always 1 here).
 */
int handle_percent(void)
{
    write(1, "%", 1);
    return (1);
}
