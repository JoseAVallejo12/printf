#include "holberton.h"

/**
 * print_int - print integer and length
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */

int print_int(va_list data_string)
{
	int n, div = 1, len = 0;
	unsigned int num;

	n  = va_arg(data_string, int);
	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);

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
	/*int len_char;*/

	/* inicialice all var */
	c = va_arg(data_string, int);

	if (c < 0 || c > 127)
		return (_write_char(c));

	va_end(data_string);
	return (_write_char(c));
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

	va_end(data_string);
	return (_write_char('%'));

}
