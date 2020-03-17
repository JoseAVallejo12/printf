#include "holberton.h"

/**
 * _printf - copy of funtion boult.in printf
 * @format: format
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	/* declarate all variables */
	va_list data;
	int len_format, i;
	int (*op_funtion)(va_list);
	char letter;

	/* inicialize all variables */
	i = len_format = 0;
	va_start(data, format);

	/* check each letter of format, find to % character */
	while (*(format + i) != '\0')
	{
		if (*(format + i) != '%')
		{
			letter = format[i];
			len_format += write(1, &letter, 1);
		}
		else
		{
			op_funtion = find_match(format, &i);
			len_format += op_funtion(data);
			i++;
		}

		i++;
	}
	va_end(data);
	return (len_format);
}


/**
 * main - mant for test printf
 *
 * Return: Always 0 int
 */

int main(void)
{
	int i = 0;

	i = _printf("Imprimir %s %c, %i", "Betty", 'C', 2443);
	printf("\n%d return de _ptf\n", i);

	i = printf("Imprimir %s %c, %i", "Betty", 'C', 2443);
	printf("\n%d return de ptf\n", i);

	return (i);
}
