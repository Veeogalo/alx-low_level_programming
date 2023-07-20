#include <stdio.h>
/**
* main - Entry point
* Description: Prints all possible numbers in three digits
* Return: Always 0
*/
int main(void)
{
int i = '0';
int m = '1';
int n = '2';
for (i = '0'; i <= '7'; i++)
{
for (m = '1'; m <= '8'; m++)
{
for (n = '2'; n <= '9'; n++)
{
if (i != m || i != n && m != n)
putchar(i);
putchar(m);
putchar(n);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
