#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print stuff
 * @format:pointer
 * @...: args
 * Return: always 0
 */

int _printf(const char *format, ...)
{
	int index = 0;


	while (format[index] != '\0')
	{
		if (format[index] == 'c')
		{
			va_list args;

			va_start(args, format);
			va_end(args);
		}
		else if (format[index] == 's')
		{
			va_list args;

			va_start(args, format);
			va_end(args);
		}
		else if (format[index] == '%')
		{
			va_list args;

			va_start(args, format);
			va_end(args);
		}
		else
		{}
	}
		return (0);
}
