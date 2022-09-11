#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all the 
 * single digit numbers of base 10 starting 
 * zero(0)
 *
 * Return: 0
 */
int main(void)
{
/* variable declaration */

int digits;

/* function that prints base ten digits */

for ( digits = '0'; digits <= '9'; digits ++)

putchar(digits);

/* no new line and return */

putchar('\n');

return (0);
}
