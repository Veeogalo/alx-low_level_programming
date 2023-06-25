#include "main.h"
/**
* main - Entry point
* times_table - prints the 9 times table, starting with 0
* Return: ALways 0
*/
void times_table(void)
{
int m, n, x;
for (m = 0; m <= 9; m++)
{
for (n = 0; n <= 9; n++)
x = m * n;
for (x = 0; x <= 81; x++)
{
_putchar(',');
_putchar(' ');
}
{
if (m == 9 && n == 9)
break;
}
}
}
