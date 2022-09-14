#include "main.h"
/**
 * print_sign -This function checks the
 * sign of a number.
 *
 * @n: This is the int that serve as arguement
 * of the function
 *
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');

return (1);
}

else if (n < 0)
{
_putchar('-');

return (-1);
}
else
{
_putchar('0');

return (0);
}
}
