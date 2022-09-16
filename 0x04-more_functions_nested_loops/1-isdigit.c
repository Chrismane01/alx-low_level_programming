#include "main.h"

/**
 * _isdigit - checks for characters that are digits
 * @c: character to check
 *
 * Return: 0 or 1
 */


int _isdigit(int c)
{
char i = '0';
int isdigit = 0;
  
for (; i <= '9'; i++)
{
if (i == c)
{
isdigit = 1;
break;
}
}

return (isdigit);
}
