#include "main.h"
/**
 * isupper - checks for uppercase letter
 * @c: character to check
 *
 * Return: 0 or 1
 */
int isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}

return (0);
}
