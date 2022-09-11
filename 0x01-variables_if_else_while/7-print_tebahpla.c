#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the lowercase
 * alphabets in reverse.
 *
 * Return: 0
 */
int main(void)
{
/* variable declaration */

char cat;

/* function that prints lowercase alphabets in reverse */

for (cat = 'z'; cat >= 'a'; cat--)

putchar(cat);

/* no new line and return function */

putchar ('\n');

return (0);
}
