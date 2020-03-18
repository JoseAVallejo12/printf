#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct options - structure
 * @fmt: Pointer
 * @p: pointer
 */
struct options
{
	char *fmt;
	int (*p)(va_list);
};
typedef struct options op_fmt;

/* Prototype funtion own */
int (*find_match(const char *s, int *z))(va_list);
int _printf(const char *format, ...);
char *itoa_int(char *dest, int i);
int print_int(va_list data_string);
int print_char(va_list data_string);
int print_str(va_list data_string);
int _write_char(char c);

#endif
