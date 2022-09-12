#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible
 * combinations of single digits
 *
 * Return: Always (0)
 */
int main(void)
{
int num;
int numm;

for (num = '0'; num < '9'; num++)
{
for (numm = num + 1; numm <= '9'; numm++)
{
if (numm != num)
{ 
putchar(num);

putchar(numm);

if (num == '8' && numm =='9')

continue;
 

putchar(',');

putchar(' ');

}

}

}
putchar('\n');

return (0);
}
