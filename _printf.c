#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* printFunction - check description
* Description:prints specifiers
* @func:argument
* @arg:argument
* Return: no of chars printed
*/

int printFunction(char func, va_list arg)
{
unsigned int p;

fList fs[] = {
{"c", print_char},
{"s", print_str},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};

for (p = 0; fs[p].f != NULL; p++)
{
if (fs[p].f[0] == func)
{
return (fs[p].print(arg));
}
}
return (0);
}

/**
 * _printf - print different arguments
 * @format:pointer
 * @...: args
 * Return: always 0
 */
int _printf(const char *format, ...)
{
unsigned int i;
int ct = 0;
int getFunction = 0;
va_list arg;
va_start(arg, format);
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
getFunction = printFunction(format[i + 1], arg);
if (getFunction == 0)
{
_putchar('%');
ct++;
}
if (getFunction > 0)
{
ct = ct + getFunction;
}
if (getFunction == -1 || getFunction != 0)
ct++;
}
va_end(arg);
return (ct);
}
