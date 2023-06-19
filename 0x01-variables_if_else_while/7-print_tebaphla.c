#include <stdio.h>
/**
* main - Entry point
* Description: Prints alphabets in lowercase then uppercase
* Return: Always 0
*/
int main(void)
{
int l = 122;
while (l >= 97)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
