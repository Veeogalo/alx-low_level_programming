#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: the string copies to
 * @src:the string copies from
 * @n:the size i bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int m = 0;
while (m < n && src[m] != '\0')
{
dest[m] = src[m];
m++;
}
while (m < n)
{
dest[m] = '\0';
m++;
}
return (dest);
}
