#include "holberton.h"

/**
 * print_int - print integer and length
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */

int print_int(va_list data_string)
{
	/* declaration of all var */
	char c;
	int integer_value;
	int i, len_int;
	char *d;

	/* inicialice all var */
	integer_value = 0;
	integer_value = va_arg(data_string, int);

	if (integer_value < 0)
		d = _malloc(INT_MIN);

	else
		d = _malloc(INT_MAX);

	if (d == NULL)
	{
		free(d);
		return (-1);
	}



	itoa_int(d, integer_value);
	/* code */
	for (i = 0; d[i] != '\0'; ++i)
	{
		c = d[i];
		_write_char(c);
	}

	if (integer_value < 0)
		len_int = sizeof(integer_value) + 1;
	else if (d == NULL)
		len_int = -1;
	else
		len_int = sizeof(integer_value);

	va_end(data_string);
	free(d);
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
	char c;
	int len_char;

	/* inicialice all var */
	len_char = 0;
	c = va_arg(data_string, int);

	/* code */
	if (c == '\0')
	{
		return (_write_char(' '));
	}

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
	char *p, c;
	int len_string, i;
	char *nulo = "(null)";

	/* inicialice all var */
	len_string = 0;
	p = va_arg(data_string, char *);


	/* code */
	if (p == NULL)
	{
		i = 0;
		while (*(nulo + i) != '\0')
		{
			len_string += _write_char(nulo[i]);
			i++;
		}
	}
	else
	{
		for (i = 0; *(p + i) != '\0'; ++i)
		{
			c = p[i];
			len_string += _write_char(c);
		}
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
