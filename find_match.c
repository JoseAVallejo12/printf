#include "holberton.h"
#include <string.h>
#include <stdlib.h>

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
	char buffer[5], c;

	/* inicialice all var */
	integer_value = 0;
	integer_value = va_arg(data_string, int);
	itoa_int(buffer, integer_value);

	/* code */
	for (i = 0; i < 5; ++i)
	{
		c = buffer[i];
		write(1, &c, 1);
	}

	if (integer_value < 0)
		len_int = sizeof(integer_value) + 1;
	else
		len_int = sizeof(integer_value);

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
	len_string += write(1, &c, 1);

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
	for (i = 0; *(p + i) != '\0'; ++i)
	{
		c = p[i];
		len_string += write(1, &c, 1);
	}

	return (len_string);
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
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	/*Check NO NULL*/
	while (s != NULL && s[aux] != '\0')
	{
		i = 0; /*Reset variable i*/
		while (i < 3)/*While for evaluate each format*/
		{
			if (s[aux] == options[i].fmt[0])
			{
				aux = (*z + 2);
				return (options[i].p); /*Assign values*/
			}
			i++;
		}

	} /*End principal WHILE*/

	return (0);
}
