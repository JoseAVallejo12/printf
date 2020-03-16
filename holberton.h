#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/* librery dinamics */
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* Prototype funtion own */
void (*find_match(const char *s, int *z))(va_list);
int _printf(const char *format, ...);

#endif
