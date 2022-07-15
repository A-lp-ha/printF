#define MAIN_H
#ifndef MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - printing specifiers
* @f:specifier
* @print:function
*/

typedef struct convert
{
	char *f;
	int (*print)(va_list);
} fList;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_st_r(va_list arg);
int print_unsigned(va_list arg);
int print_int(va_list arg);
int print_percent(void);

#endif /*MAIN_H*/ 
