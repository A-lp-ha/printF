#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct spstructure - printing specifiers
* @a:specifier
* @print:function
*/

typedef struct spstructure
{
	char *a;
	int (*print)(va_list);
} specifierStruct;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_st_r(va_list arg);
int print_unsigned(va_list arg);
int print_int(va_list arg);
int print_percent(void);

#endif 
