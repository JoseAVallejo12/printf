"OJECT PRINTF - HOLBERTON SCHOOL
"Jose Vallejo Contreras & Carlos Barros Amador

"Synopsis
"This is a simple implementation of printf function that formats and prints data

"Description
*The _printf() function produces output according to a format which is described below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

*The available convertion specifiers are:

*%c: Prints a single character.
*%s: Prints a string of characters.
*%d: Prints integers.
*%i: Prints integers.
*%b: Prints the binary representation of an unsigned decimal.
*%u: Prints unsigned integers
*%x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
*%X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
*%r: Prints a reversed string
*%R: Prints the Rot13 interpretation of a string
*Usage
*All the files are to be compiled on Ubuntu 14.04 LTS
*Compile your code with gcc -Wall -Werror -Wextra -pedantic *.c
*Include the "holberton.h" header file on the functions using the _printf()


*Example program

*printf: built-in funtion of C
*_printf: Owner funtion
 
*printf("=====================\n");
*printfi("*****QAREVIW 3-20-2020*****\n");
*printf("=====================\n");
*_printf("Let's print a simple sentence.\n");
*printf("Let's print a simple sentence.\n");
*_printf("%c", 'S');
*printf("%c", 'S');
*_printf("A char inside a sentence: %c. Did it work?\n", 'F');
*printf("A char inside a sentence: %c. Did it work?\n", 'F');
*_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
*printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
*_printf("%s", "This sentence is retrieved from va_args!\n");
*printf("%s", "This sentence is retrieved from va_args!\n");
*_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
*printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
*_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
*printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
*_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
*printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
*_printf("%%");
*printf("%%");
*_printf("Should print a single percent sign: %%\n");
*printf("Should print a single percent sign: %%\n");
*_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
*printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
*_printf("css%ccs%scscscs\n", 'T', "Test");
*printf("css%ccs%scscscs\n", 'T', "Test");
*_printf(NULL);
*printf(NULL);
*_printf("%c", '\0');
*printf("%c", '\0');
*_printf("%"); 
*printf("%");
*_printf("%!\n");
*printf("%!\n");
*_printf("%K\n");
*printf("%K\n");



* ============================
*  *****QAREVIW 3-20-2020*****
*  ============================
*  Let's print a simple sentence.
*  Let's print a simple sentence.
*  SA char inside a sentence: F. Did it work?
*  SA char inside a sentence: F. Did it work?
*  Let'see if the cast is correctly done: 0. Did it work?
*  Let'see if the cast is correctly done: 0. Did it work?
*  This sentence is retrieved from va_args!
*  This sentence is retrieved from va_args!
*  Complete the sentence: You know nothing, Jon Snow.
*  Complete the sentence: You know nothing, Jon Snow.
*  Complete the sentence: You (null) nothing, Jon Snow.
*  Complete the sentence: You (null) nothing, Jon Snow.
*  With some more args: You know nothing, Jon Snow.
*  With some more args: You know nothing, Jon Snow.
*  %Should print a single percent sign: %
*  %Should print a single percent sign: %
*  Loading ... 99% Please wait
*  Loading ... 99% Please wait
*  cssTcsTestcscscs
*  cssTcsTestcscscs
*  %!
*  %!
*  %K
*  %K
*  =====================
*  *****FIN*****
*  =====================
*  START OF TEST
*  =====================
*  printf(NULL)  : -1
*  _printf(NULL) : -1
*  printf("%") : -1
*  _printf("%"): -1
*  =====================
*  *****CHAR*****
*  =====================
*  Expected   : a
*  Actual     : a
*  Expected   : z
*  Actual     : z
*  Expected   : 15
*  Actual     : 15
*  Expected   : ac
*  Actual     : ac
*  Expected   : 5
*  Actual     : 5
*  Expected   :  .
*  Actual     :  .
*  ok 16, own 17
*  Expected   : %y
*  Actual     : %y
*  Expected   : %
*  Actual     : %
*  =====================
*  *****STRINGS*****
*  =====================
*  Expected   : holberton
*  Actual     : holberton
*  Expected   : $
*  Actual     : $
*  Expected   : hello, world
*  Actual     : hello, world
*  Expected   : 0
*  Actual     : 0
*  Expected   : holbertonschool
*  Actual     : holbertonschool
*  Expected: % %%hello holberton(null)
*  Actual:  % %%hello holberton(null)
*  Expected: 37
*  Actual  : 37
*
*
*
