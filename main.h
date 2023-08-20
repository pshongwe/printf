#ifndef MAIN_H
#define MAIN_H

/* headers */
#include <stdarg.h>
#include <stddef.h>

/* constants */
#define BUFSIZE 1024

/* Protypes */
typedef int (*print_function)(va_list args, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args, int *count);
int print_string(va_list args, int *count);
int print_number(va_list args, int *count);
int print_binary(va_list args, int *count);
int print_reverse(va_list args, int *count);
int _strlen(char *s);

#endif /* MAIN_H */
