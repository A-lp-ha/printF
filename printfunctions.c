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


