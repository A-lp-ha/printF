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
int i = 0;
int ct = 0;

va_list args;
va_start(args, format);

if (format == NULL)
return (-1);

while (format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
ct++;
continue;
}
else if (format[i + 1] = '%')
{
_putchar('%');
ct++;
continue;
}
}
va_end(args);
return (ct);
}
