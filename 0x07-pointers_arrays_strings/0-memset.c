#include "main.h"
/**
* *_memset - fills memory with a constant byte
* @s:the beginning of value to be filled
* @b:the value desired
* @n:the number of bytes to be changed
* Return: changed arrays with new value n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
