#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - print different arguments
 * @format:pointer
 * @...: args
 * Return: always 0
 */
int _printf(const char *format, ...)
{
int i;
int ct = 0;
int get_function = 0;
va_list args;
va_start(args, format);
if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
ct++;
continue;
}
if (format[i + 1] == '%')
{
_putchar('%');
ct++;
continue;
}
if (format[i + 1] == '\0')
return (-1);
get_function = get_printfunction(format[i + 1], args);
if (get_function == 0)
{
_putchar('%');
ct++;
}
if (get_function > 0)
{
ct = ct + get_function;
}
if (get_function == -1 || get_function != 0)
ct++;
}
va_end(args);
return (ct);
}
