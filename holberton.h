#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/* libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * structure options - structure
 * @fmt: Pointer
 * @p: pointer 
 */

typedef struct options
{
	char *fmt;
	int (*p)(va_list);
} op_fmt;


/* Prototype funtion own */
int (*find_match(const char *s, int *z))(va_list);
int _printf(const char *format, ...);

#endif
