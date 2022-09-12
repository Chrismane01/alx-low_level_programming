#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints alphabets in lowecase
 *
 * Return: 0
 */
int main(void)
{
/* variable declaration */

char alpha;

/* function that prints alphabets in lower case */

for (alpha = 'a'; alpha <= 'z'; alpha++)

putchar(alpha);

putchar('\n');

return (0);
}
