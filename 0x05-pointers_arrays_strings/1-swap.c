#include "main.h"
/**
 * swap_int - this function swaps the values
 * of two integers.
 * @a: first integer input pointer
 * @b: second integer input pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{

/* declaration of third variable */
int c;


c = *a;

*a = *b;

*b = *c;

}
