#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - The Entry point
 *
 * Description: This program print if the number is
 * positive, zero, or negative
 *
 * Return: 0
 */
int main(void)
{
/* variable declaration */

int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

/* function that handles the programme */

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
