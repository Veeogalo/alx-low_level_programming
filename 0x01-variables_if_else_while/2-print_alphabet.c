#include <stdio.h>
/**
* main - Entry point
* Deascription: Prints letters a-z in lowercase
* Return: Always 0
*/
int main(void)
{
int l = 97;
while (l <= 122)
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
