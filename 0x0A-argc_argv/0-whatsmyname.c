#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by
 * a new line
 * @argc: arguement count
 * @argv: argument value, a string that come after
 * calling function
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i = 0;

if (argc <= 1)
{
printf("%s\n", argv[i]);
argc--;
}
return (0);
}
