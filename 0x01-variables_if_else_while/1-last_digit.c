#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: this programming print if the digit
 * is >5, =0 and <6
 *
 * Return: 0
 */
int main(void)
{
int n;

int l;

srand(time(0));

n = rand() - RAND_MAX / 2;

l = n % 10;

if (1 > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, l);
}
else if (1 == 0)
{
printf("Last digit of %i is %i and is 0\n", n, l);
}
else
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
}
return (0);
}
