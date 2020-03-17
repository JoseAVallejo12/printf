#include "holberton.h"

/**
 * _itoa - conver int to string
 * @dest: pointer to buffer
 * @i: integer value
 * Return: string
 */

static char *_itoa(char *dest, int i)
{
	if (i <= -10)
		dest = _itoa(dest, i / 10);

	*dest++ = '0' - i % 10;
	return (dest);
}

/**
 * itoa_int - prototype main
 * @dest: pointer to buffer
 * @i: integer value
 * Return: string
 */

char *itoa_int(char *dest, int i)
{
	char *s = dest;

	if (i < 0)
		*s++ = '-';
	else
		i = -i;

	*_itoa(s, i) = '\0';
	return (dest);
}
