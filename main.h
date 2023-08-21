#ifndef MAIN_H
#define MAIN_H

/* Headers */
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * @printer: The printer
 * @f: function pointer
 */
typedef struct printer
{
    char *printer;
    int (*f)(void *);
} printer_t;

/* Constants */
#define BUFSIZE 512

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(void *args);
int print_string(void *args);
int print_number(void *args);
int print_binary(void *args);
int print_reverse(void *args);
int (*get_print_func(const char *s))(void *);
int _strlen(char *s);
int print_percent(void *args);
int print_else(void *args);

#endif /* MAIN_H */
