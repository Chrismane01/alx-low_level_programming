x#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabets in lowercase
 * with the exception of q and e
 *
 * Return: 0
 */
int main(void)
{

/* variable declaration */

char alpha;

/* function that prints the alphabets in lowercase */


for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
{
putchar(alpha);
}
}
putchar('\n');

return (0);

}
