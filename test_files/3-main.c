#include <stdio.h>
#include <limits.h>
#include "holberton.h"
int main(void)
{
	printf("Expected:  %d\n", 6);
	_printf("Actual :   %d\n", 6);
	printf("Expected:  %d\n", 1998);
	_printf("Actual :   %d\n", 1998);
	printf("Expected:  %d\n", -1998);
	_printf("Actual :   %d\n", -1998);
	printf("Expected:  %d\n", 0);
	_printf("Actual :   %d\n", 0);
	printf("Expected:  %d\n", -0);
	_printf("Actual :   %d\n", -0);
	printf("Expected:  %d\n", 6.7);
	_printf("Actual :   %d\n", 6.7);
	printf("Expected:  %d\n", 'H');
	_printf("Actual :   %d\n", 'H');
	int ui = (unsigned int)INT_MAX;
	int len, len2;
	len = printf("Expected:  %d\n", 0);
	len2 = _printf("Actual :   %d\n", 0);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("asd %d asd %i, %d %i %d\n", ui, -42323, -999*9, 4444, 5);
	len2 = printf("asd %d asd %i, %d %i %d\n", ui, -42323, -999*9, 4444, 5);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Hexadecimal: %i\n", ui);
	printf("Hexadecimal: %i\n", ui);
	return (0);
}
