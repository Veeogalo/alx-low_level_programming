#include "main.h"
/**
* more_number - print 10 times the numbers from 0 to 14
* Return: 10 times the numbers from 0 to 14
*/
void more_numbers(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = 0; m <= 14; m++)
{
if (m > 0)
{
_putchar(m / 10 + '0');
}
_putchar(m % 10 + '0');
}
_putchar('\n');
}
}
