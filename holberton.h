#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
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
int find_match(va_list datos, const char *format, int index);
int _printf(const char *format, ...);
char *itoa_int(char *dest, int i);
int print_int(va_list data_string);
int print_char(va_list);
int print_str(va_list);
int print_porcent(va_list);
int _write_char(char c);

/*Others functions*/
int print_number(va_list);
void *_malloc(unsigned int b);

#endif
