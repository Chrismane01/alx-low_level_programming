#include <stdio.h>
/**
 * main - Entry point
 *
 * Description This program prints the alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
/* variable declaration */

char alpha;

char alphaa;

/* function that print lowercase and uppercase */

for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);

for (alphaa = 'A'; alphaa <= 'Z'; alphaa++)
putchar(alphaa);

putchar('\n');

return (0);
}
