#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* Return: Always 0
*/
void print_alphabet_x10(void)
{
int n = 0;
char l;
while (n++ <= 9)
{
for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
}
}
