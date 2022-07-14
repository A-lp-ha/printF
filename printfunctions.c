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

/**
* print_nan - check description
* Description: writes characters after a % if nothing matches struct
* @c1:char
* @c2:char
* Return: 1
*/

int print_nan(char c1, char c2)
{
if (c2 == '%')
{
write(1, &c2, 1);
return (1);
}
else
{
write(1, &c1, 1);
write(1, &c2, 1);
return (2);
}
}

/**
* print_num - check description
* Description: print int 'd'
* @n:int
*/

void print_num(int n)
{
unsigned int num;

if (n < 0)
{
_putchar('-');
num = -n;
}
else
num = n;
if (num / 10)

print_num(num / 10);
_putchar((num % 10) + '0');
}
