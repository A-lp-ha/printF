#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* print_char - print characters
* @arg: arguments
* Return: 1 success, -1 unsuccessfull
*/

int print_char(va_list arg)
{
return (_putchar(va_arg(arg, int)));
}

/**
* print_string - prints strings
* @arg: arguments
* Return: 1 successfull, -1 unsuccessfull
*/

int print_str(va_list arg)
{
int count;
char *str = va_arg(arg, char *);

if (str == NULL)
str = "(null)";

for (count = 0; str[count]; count++)
{
_putchar(str[count]);
}
return (count);
}

/**
* print_int - check description
* Description: prints integer
* @arg:int 
* 
* Return: 0
*/

int print_int(va_list arg)
{
int d = va_arg(arg, int);
unsigned int a = 1, i, r, c = 0;
if (d < 0)
{
_putchar('-');
c++;
d = d * (-1);
}
for (i = 0; d / a >9; i++, a *=10)
;
for(; a >= 1; d %= a, a /= 10, c++)
{
r = d / a;
_putchar('0' + r);
}
return (c);
}
