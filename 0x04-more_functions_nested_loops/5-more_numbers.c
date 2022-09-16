#include "main.h"

/**
 * more_numbers - prints 01234567891011121314\n
 *
 * Return: void
 */


void more_numbers(void)
{
int i, j = 0;
  
for (; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (c > 9)
_putchar(i / 10 + '0');

_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
