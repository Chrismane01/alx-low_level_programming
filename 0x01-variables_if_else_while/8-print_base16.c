#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:This program prints all
 * the numbers of base 16 in lowercase.
 *
 * Return:0
 */
int main(void)
{

/* variable declaration */

int num;

char alpha;

/* function for the numerical numbers of base 16 */

for (num = '0'; num <= '9'; num++)
putchar(num);

/* function for the alphabetical letters of base 16 */

for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);

/* no new line and return function */

putchar('\n');
return (0);
}
