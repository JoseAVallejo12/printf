#include "holberton.h"
#include <string.h>
/**
 * find_match - find mathc of src in dest
 *
 */
void print_string(va_list data_string)
{
	char *p;

	p = va_arg(data_string, char *);
	write(1, p, strlen(p));
}



void (*find_match(const char *s, int *z))(va_list)
{
	(void) z;
	(void) s;
	return (print_string);

}
