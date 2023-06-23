#include <stdio.h>
/**
 * main - Entry point
 * Description: prints a combination of 2 digits
 * Return: Always 0
 */
int main(void)
{
int n, m;
for (n = 0; n < 10; n++)
{
for (m = 1; m < 10; m++)
{
putchar(n % 10 + '0');
putchar(m % 10 + '0');
if (n == 9 && m == 9)
	continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
