#include <unistd.h>

/**
* _putchar - check description
* Description: writes a character
* @c: character
* Return:1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
