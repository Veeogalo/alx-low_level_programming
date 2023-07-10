#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @n:input value
 * Returrn:value of n
 */
char *leet(char *n)
{
int m;
int p;
char s1[] = aAeEoOtTlL;
char s2[] = 4433007711;
for (m = 0; n[i] != '\0'; m++)
{
for (p = 0; p < 10; p++)
{
if (n[m] == s1[p])
{
n[m] = s2[p];
}
}
}
return (n);
}
