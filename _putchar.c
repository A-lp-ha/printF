#include <unistd.h>

/**
* _putchar - check description
* Description: writes a character
* @c: character
* Reaturn:1
*/

int _putchar(char c)
{
write(1, &c, 1);
return (1);
}
