#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct options - structure
 * @fmt: Pointer
 * @p: pointer
 */
struct options
{
	char *fmt;
	int (*p)(va_list data_string);
};
typedef struct options op_fmt;

/*Others functions*/

int find_match(va_list datos, const char *format, int index);
int _printf(const char *format, ...);
int print_int(va_list data_string);
int print_char(va_list data_string);
int print_str(va_list data_string);
int print_porcent(va_list data_string);
int _write_char(char c);
#endif
