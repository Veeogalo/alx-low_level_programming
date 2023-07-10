#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: The reversed string
 */
void rev_string(char *s)
{
char rev = s[0];
int y = 0;
int i;
while (s[y] != '\0')
y++;
for (i = 0; i < y; i++)
{
y--;
rev = s[i];
s[i] = s[y];
s[y] = rev;
}
}
