#include "main.h"
/**
 * _isalpha - This function checks if
 * c is a lowercase or uppercase letter
 *
 * @c: is the int that will use for the arguement
 * of the function
 *
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
