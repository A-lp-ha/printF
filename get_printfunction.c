#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* get_printfunction - check description
* Description: picks the right coreesponding function to the
* conversion specifier
* @func:specifier
* @arg:arguments
* Return: pointer to the corresponding printing function
*/

int get_printfunction(char func, va_list arg)
{
int i
;
f_list print_n[] = {
{'c', print_char},
{'s', print_string},
{'d', print_int},
{'i', print_int},
{NULL, NULL}
};

for (i = 0; print_n[i].f != NULL; i++)
{
if (print_n[i].f[0] == func)
{
return (print_n[i].print(arg));
}
}
return (0);
}
