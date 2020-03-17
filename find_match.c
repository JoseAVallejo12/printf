#include "holberton.h"
#include <string.h>
/**
 * find_match - find mathc of src in dest
 *
 */
int print_str(va_list data_string)
{
	char *p;

	p = va_arg(data_string, char *);
	write(1, p, strlen(p));

	return (0);
}



int (*find_match(const char *s, int *z))(va_list)
{
	/*Declaring structure*/
	int i;
	int aux;

	aux = (*z + 1);

	/*Declaring structure*/
	op_fmt options[] = {
		//{"i", print_int},
		//{"d", print_dec},
		//{"c", print_char},
		//{"f", print_float},
		{"s", print_str},
		//{"x", print_hexa},
		//{"X", print_HEXA},
		//{"o", print_octal},
		//{"p", print_adress},
		//{"u", print_unsigned},
		//{"%%", print_porcentage},
		//{"r", print_unknow},
		{NULL, NULL}
	};

	/*Check NO NULL*/
	while (s != NULL && s[aux] != '\0')
	{
		i = 0; /*Reset variable i*/
		while (i < 2)/*While for evaluate each format*/
		{
			if (s[aux] == options[i].fmt[0])
			{
				aux = (*z + 2);
				return (options[i].p); /*Assign values*/
			}

			else
			{
				aux = (*z + 1);
				return (NULL);
			}

			i++;
		}

	}/*End principal WHILE*/

	return (0);
}
