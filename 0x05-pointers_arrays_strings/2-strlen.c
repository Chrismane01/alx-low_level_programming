#include "main.h"

/**
 * _strlen - this function returns the length of a string
 * @s: input string
 * Return: void
 */

int _strlen(char *s)
{
int i = '0';

while (*s[i] != '\0')
i++;

return (i);
}
