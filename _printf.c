#include "holberton.h"
/**
 * _printf - copy of funtion boult.in printf
 * @format: format
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list data;
	int len_format, i, check;
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
			len_format += write(1, &letter, 1);
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == ' ')
			{
				i++;
				letter = format[i];
				len_format += write(1, &letter, 1);
			}
			op_funtion = find_match(format, &i);
			if (op_funtion == NULL)
				return (-1);
			check = op_funtion(data);
			if (check == -1)
				len_format = -1;
			else
			{
				len_format += check;
				i++;
			}
		}
		i++;
	}
	va_end(data);
	return (len_format);
}
