#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all
 * single digit numbers of base 10 starting
 * from 0.
 *
 * Return: 0
 */
int main(void)
{
/* variable declaration */

int num;

/* function for that prints single digits of base 10 */

for (num = 0; num < 10; num++)

printf("%i", num);

printf("\n");

return (0);
}
