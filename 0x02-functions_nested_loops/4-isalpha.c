#include "main.h"
/**
* _isalpha - returns 1 if an input in alphabet and 0 if otherwise
* @c:input as an integer
* Return: Always 1 (Success)
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
