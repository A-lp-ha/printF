#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_char - print characters
* @arg: arguments
* Return: 1 success, -1 unsuccessfull
*/

int print_char(va_list arg)
{
return (_putchar(va_arg(arg, char)));
}

/**
* print_string - prints strings
* @arg: arguments
* Return: 1 successfull, -1 unsuccessfull
*/

int print_string(va_list arg)
{
int count;
char *stg = va_arg(arg, char *);

for (count = 0; stg[count]; count++)
{
_putchar(stg[count]);
}
return (count);
}
