#include "main.h"
/**
 * _isupper - functions that checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase otherwise 0
 */

int isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

return (0);
}
