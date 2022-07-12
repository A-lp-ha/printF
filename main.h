#define MAIN_H
#ifndef MAIN_H
#typedef struct convert;
{
	char *convert;
	int (*f)(va_list);
} f_list;
int _printf(const char *format, ...);
int _putchar(char c);
int (*get_function(char))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_nan(char c1, char c2);
int print_num(va_list list);
#endif /*MAIN_H*/ 
