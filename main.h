#ifndef MAIN_H
#define MAIN_H

/* headers */
#include <stdarg.h>
#include <stddef.h>

/* Protypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args, int *count);
int print_string(va_list args, int *count);

#endif /* MAIN_H */
