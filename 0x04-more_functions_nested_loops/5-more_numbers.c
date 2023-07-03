#include "main.h"
/**
* more_number - prints 10 times the numers from 0 to 14
* @n: input as the number of times the number prints
* @m: input as integer that is to be printed
* Return: 10 times the numbers from 0 to 14
*/
void more_numbers(void)
{
int n;
int m;
for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 14; m++)
{
if (m > 0)
{
_putchar(m /10 + '0');
}
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
