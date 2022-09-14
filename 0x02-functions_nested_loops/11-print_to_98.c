#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from any integer to 98
 *
 * @n: integer input (arguement)
 *
 * Return: 0
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%1, ", n);

if (n > 98)

n--;

else

n++;
}

printf("98\n");

}
