#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 * Return:the string in reverse
 */
void print_rev(char *s)
{
int longi = 0;
int x;
while (*s != 0)
{
longi++;
s++;
}
s--;
for (x = longi; x > 0; x--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
