#include "main.h"
#include <stdio.h>
/**
* main - Entry point
* print_to_98 - prints all natural numbers from n to 98
* @n:input as an integer
* Return: Always 0
*/
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
_putchar(n);
_putchar(',');
_putchar(' ');
if (n == 98)
break;
}
_putchar('\n');
}
