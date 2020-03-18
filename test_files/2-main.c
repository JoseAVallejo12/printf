#include "holberton.h"
int main(void)
{
	char c = 'C';
	char *str = "Hello";
	int num = 5;

	/* "Print the character c" */
	_printf("Print the character %c", c);

	/* "Print the string Hello" */
	_printf("Print the string %s", str);

	/* "Print a % sign" */
	_printf("Print a %% sign");

	/* "Print the number 5 since number 5 is great" */
	_printf("Print the number %i since number %d is great", num, num);

	return (0);
}
