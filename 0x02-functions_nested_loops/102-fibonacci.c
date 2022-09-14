#include <stdio.h>
/**
 * main - prints ot first
 * 50 fibonacci suit numbers
 * Return: 0
 */
int main(void)
{

long int a = 1, b = 2;

long int c = 3;

long int d;

printf("%ld, ", a);

printf("%ld, ", b);

for (d = 3; d < 50; d++)
{

printf("%ld", c);

a = b;

b = c;

c = a + b;
}

printf("ld\n", c);

return (0);

}
