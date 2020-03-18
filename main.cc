#include "holberton.h"
#include <limits.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
		int count;
		_printf("this is a char replace %c\n", 'b');
		_printf("this is a string replace %s\n", NULL);
		count = _printf("this is a string replace %s\n", "la vida es linda");
		count = printf("this is a string replace %s\n", "la vida es linda");
		printf("this is count value: %d, %i\n", count, count);
		_printf("this is count value: %d, %i\n", count, count);

		_printf("this is a modulo alone %hh");
		_printf("\nthis is a unkown2  % \n");
		_printf("this is an unknown option %r\n");
		_printf("this is a double modulo %%\n");
		count = _printf("%i\n", 0);
		printf("chars printed %i\n", count);
		count = _printf("%i\n", 12345678);
		printf("chars printed %i\n", count);
		count = _printf("%i\n", -12345678);
		printf("chars printed %i\n", count);
		count = _printf("%b \n", 98);
		printf("chars printed %i\n", count);
		count = printf("Expected -> [%d] :: [%i] :: [%d] :: [%i]\n", INT_MIN, INT_MAX, INT_MAX, INT_MIN);
		printf("chars printed %i\n", count);
		count = _printf("Actual -> [%d] :: [%i] :: [%d] :: [%i]\n", INT_MIN, INT_MAX, INT_MAX, INT_MIN);
		printf("chars printed %i\n", count);
		printf("%u\n", -((unsigned int)-2147483648));
		_printf("%u\n", ((unsigned int)-2147483648));
		_printf("%b\n", -2);
		return (0);
}
