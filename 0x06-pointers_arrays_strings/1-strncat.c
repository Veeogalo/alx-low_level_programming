#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: string to
 * @src:string from
 * @n:bytes
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (b < n && src[a] != '\0')
{
dest[b] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
