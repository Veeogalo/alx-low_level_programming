#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a:integer to be swapped from
* @b:integer to be swapped to
*/
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b = m;
}
