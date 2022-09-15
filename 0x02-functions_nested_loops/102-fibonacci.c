#include <stdio.h>
/**
 * main - prints ot first
 * 50 fibonacci suit numbers
 * Return: 0
 */
int main(void)
{

long a = 0;
long b = 1;
long n = 3;

printf("%li,", a)

printf("%li,", b)

while (n < 50)

{
long fib = a + b;

printf("%li,". fib);

a = b;

b = fib;

n++;
}

while (n == 50)

{
long fib = a + b;

printf("%li\n", fib);

a = b;
b = fib;
n++;
}
return (0);
}
