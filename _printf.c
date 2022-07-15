#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* printSpecifier - check description
* Description:prints specifiers
* @spec:argument
* @arg:argument
* Return: no of chars printed
*/

int printSpecifier(char spec, va_list arg)
{
unsigned int p;

specifierStruct sp[] = {
{"c", print_char},
{"s", print_str},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};

for (p = 0; sp[p].a != NULL; p++)
{
if (sp[p].a[0] == spec)
{
return (sp[p].print(arg));
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
int specifierPrinted = 0;
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
specifierPrinted = printSpecifier(format[i + 1], arg);
if (specifierPrinted == 0)
{
_putchar('%');
ct++;
}
if (specifierPrinted > 0)
{
ct = ct + specifierPrinted;
}
if (specifierPrinted == -1 || specifierPrinted != 0)
ct++;
}
va_end(arg);
return (ct);
}
