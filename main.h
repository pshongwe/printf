#ifndef MAIN_H
#define MAIN_H

/* headers */
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * @printer: The printer
 * @print_function: function pointer
 */
typedef struct printer
{
	char *printer;
	int (*f)(va_list args, int *count);
} printer_t;

typedef int (*f)(va_list args, int *count);

/* constants */
#define BUFSIZE 512

/* Protypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args, int *count);
int print_string(va_list args, int *count);
int print_number(va_list args, int *count);
int print_binary(va_list args, int *count);
int print_reverse(va_list args, int *count);
int _strcmp(char *s1, char *s2);
int (*get_print_func(char *s))(va_list, int *);
int _strlen(char *s);
int print_percent(va_list args, int *count);
int print_else(va_list args, int *count);

#endif /* MAIN_H */
