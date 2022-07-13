#include "main.h"

/**
* get_printfunction - check description
* Description: picks the right coreesponding function to the
* conversion specifier
* @c:specifier
* Return: pointer to the corresponding printing function
*/

int (*get_printfunction(char c))(va_list)
{
int i = 0;
f_list print_n[] = {
{'c', print_char},
{'s', print_string},
{NULL, NULL}
};

while (print_n[i].convert)
{
if (c == print_n[i].convert)
{
return (print_n[i].f);
}
i++;
}
return (NULL);
}
