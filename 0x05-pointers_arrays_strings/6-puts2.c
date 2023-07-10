#include "main.h"
/**
* puts2 - prints every other character of a string, from the first character
* @str: string
* Return: Every other character of the string
*/
void puts2(char *str)
{
int longi = 0;
int t = 0;
char *z = str;
int y;
while (*z != '\0')
{
z++;
longi++;
}
t = longi - 1;
for (y = 0; y <= t; y++)
{
if (y % 2 == 0)
_putchar (str[y]);
}
_putchar('\n');
}

