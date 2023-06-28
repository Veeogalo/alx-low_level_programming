#include <stdio.h>
/**
* main - Entry point
* Description: Prints all possible numbers in three digits
* Return: Always 0
*/
int main(void)
{
int m = 0;
int n = 0;
int k = 0;
while(m <= 9)
{
while(n <= 9)
{
while(k <= 9)
{
if (!(m > n || k > n))
putchar(m);
putchar(n);
putchar(k);
if (m == 7 && n == 8 || k == 9)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
