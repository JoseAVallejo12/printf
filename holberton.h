#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/* libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Prototype funtion own */
int (*find_match(const char *, int *))(va_list);
int _printf(const char *, ...);
char *itoa_int(char *, int);
int print_int(va_list);
int print_char(va_list);
int print_str(va_list);
int print_porcent(va_list);


/**
 * struct options - structure
 * @fmt: Pointer
 * @p: pointer
 */

typedef struct options
{
	char *fmt;
	int (*p)(va_list);
} op_fmt;

#endif

