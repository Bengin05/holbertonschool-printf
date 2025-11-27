#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(void);
int handle_decimal(va_list args);
int handle_integer(va_list args);

#endif