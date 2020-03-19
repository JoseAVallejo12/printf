#include "holberton.h"

/**
 * print_int - print integer and length
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */

int print_int(va_list data_string)
{
	int i, len_int;
	char *d;

	d = itoa_int(va_arg(data_string, int), 10);
	
	/* code */
	for (i = 0; d[i] != '\0'; ++i)
	{
		len_int += _write_char(d[i]);
	}

	va_end(data_string);
	return (len_int);
}

/**
 * print_char - print character and length
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */
int print_char(va_list data_string)
{
	/* declaration of all var */
	int c;
	int len_char;

	/* inicialice all var */
	len_char = 0;
	c = va_arg(data_string, int);

	/* code */
	if (c == '\0' || c > 255)
	{
		return (_write_char(' '));
	}
	else
		len_char += _write_char(c);

	va_end(data_string);
	return (len_char);
}

/**
 * print_str - print character to character and length
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */
int print_str(va_list data_string)
{
	/* declaration of all var */
	char *p;
	int len_string, i;

	/* inicialice all var */
	len_string = 0;
	p = va_arg(data_string, char *);


	/* code */
	if (p == NULL)
		p = "(null)";
	
	for (i = 0; *(p + i) != '\0'; ++i)
	{
		len_string += _write_char(p[i]);
	}

	va_end(data_string);
	return (len_string);

}


/**
 * print_porcent - print simbol %%
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */

int print_porcent(va_list data_string)
{
	(void) data_string;

	_write_char(37);

	va_end(data_string);
	return (1);

}
