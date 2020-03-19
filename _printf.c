#include "holberton.h"
/**
 * _printf - copy of funtion boult.in printf
 * @format: format
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	va_list data;
	int len_format, i, check_print = 0;
	char letter;

	i = len_format = 0;
	va_start(data, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
		;
	if (i == 0)
		return (0);
	i = 0;
	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
		{
			letter = format[i];
			len_format += _write_char(letter);
		}
		else
		{
			check_print = find_match(data, format, i);

			if (check_print == -1)
				return (-1);

			else
			{
				len_format += check_print;
				i++;
			}
		}
		i++;
	}
	va_end(data);
	return (len_format);

}
