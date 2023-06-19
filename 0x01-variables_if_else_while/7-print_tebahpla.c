#include <stdio.h>
/**
* main - Entry point
* Description: prints alphabets in lowercase in reverse
* Return: Always 0
*/
int main(void)
{
int l = 122;
while (l >= 97)
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
