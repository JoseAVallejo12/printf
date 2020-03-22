#include "holberton.h"

/**
 * find_match - find coincidences in the string
 * @datos: string in
 * @format: pointer int to position in string coincidence
 * @index : index
 * Return: addres to funtion
 */

int find_match(va_list datos, const char *format, int index)
{
	/*Declaring structure*/
	int i;
	char opt;
	op_fmt options[] = {
		{"i", print_int},
		{"d", print_int},
		{"c", print_char},
		{"s", print_str},
		{"%", print_porcent},
	};

	if (format == NULL)
		return (-1);

	opt = format[index + 1];

	if (opt == '\0')
		return (-1);

	else if (format[index] == '%' && opt == '\n')
		return (_write_char('%') + _write_char(opt));

	i = 0;
	while (i < 5)/*While for evaluate each format*/
	{
		if (opt == options[i].fmt[0])
		{
			return (options[i].p(datos)); /*Assign values*/
		}
		i++;
	}
	return (_write_char(format[index]) + _write_char(opt));

}
