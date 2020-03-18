#include "holberton.h"
/**
 * _printf - copy of funtion boult.in printf
 * @format: format
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list data;
	int len_format, i, check_print;
	int (*op_funtion)(va_list);
	char letter;

	i = len_format = 0;
	va_start(data, format);

	if (format == NULL)
		return (-1);

	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
		{
			letter = format[i];
			len_format += _write_char(letter);
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			op_funtion = find_match(format, &i);
			if (op_funtion != NULL)
			{
				check_print = op_funtion(data);
				if (check_print == -1)
					return (-1);

				else
				{
					len_format += check_print;
					i++;
				}
			}

		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			len_format += _write_char(format[i]);
			break;
		}

		i++;
	}
	va_end(data);
	return (len_format);
}
