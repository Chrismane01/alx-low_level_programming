#include "main.h"
#include "stdio.h"

/**
 * main - prints the name of the arguments passed to it
 * @argc: argument count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{

if (argv[0])
{
printf("%d\n", argc - 1);

}
return (0);
}
