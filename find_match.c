#include "holberton.h"

/**
 * print_int - print integer and length
 * @data_string: argument passed of _printf funtion
 * Return: length of value
 */

int print_int(va_list data_string)
{
	/* declaration of all var */
	int integer_value;
	int i, len_int;
	char buffer[20] = "", c;

	/* inicialice all var */
	integer_value = 0;
	integer_value = va_arg(data_string, int);
	itoa_int(buffer, integer_value);

	/* code */
	for (i = 0; buffer[i] != '\0'; ++i)
	{
		c = buffer[i];
		_write_char(c);
	}

	if (integer_value < 0)
		len_int = sizeof(integer_value) + 1;
	else if (buffer == NULL)
		len_int = -1;
	else
		len_int = sizeof(integer_value);

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
	char c;
	int len_string;

	/* inicialice all var */
	len_string = 0;
	c = va_arg(data_string, int);

	/* code */
	if (c == '\0')
		return (-1);

	len_string += _write_char(c);

	va_end(data_string);
	return (len_string);
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

	/* inicialice all var */
	len_string = 0;
	p = va_arg(data_string, char *);


	/* code */
	if (p == NULL)
		len_string = -1;

	for (i = 0; *(p + i) != '\0'; ++i)
	{
		c = p[i];
		len_string += _write_char(c);
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
	char c = '%';

	_write_char(c);

	va_end(data_string);
	return (1);
}


/**
 * find_match - find coincidences in the string
 * @s: string in
 * @z: pointer int to position in string coincidence
 * Return: addres to funtion
 */

int (*find_match(const char *s, int *z))(va_list)
{
	/*Declaring structure*/
	int i;
	int aux;

	aux = (*z + 1);

	/* Declaring structure */
	op_fmt options[] = {
		{"i", print_int},
		{"d", print_int},
		{"c", print_char},
		{"s", print_str},
		{"%", print_porcent},
		{NULL, NULL}
	};

	/*Check NO NULL*/
	while (s != NULL && s[aux] != '\0' && s[aux] != ' ')
	{
		i = 0; /*Reset variable i*/
		while (options[i].fmt[0] != '\0')/*While for evaluate each format*/
		{
			if (s[aux] == options[i].fmt[0])
			{
				aux = (*z + 2);
				return (options[i].p); /*Assign values*/
			}
			i++;
		}
		break;

	} /*End principal WHILE*/

	return (NULL);
}
