#include "main.h"
/**
* print_sign - Returns 1 if input is positive,0 if 0 and -1 is negative
* @n: the input number as an integer
* Return: 1 (positve). 0 (0). -1 (negative).
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
