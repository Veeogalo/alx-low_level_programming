#include "main.h"
/**
* _strlen_recursion -  returns the length of a string
* @s:the string to be measured
* Return:Length of the string
*/
int _strlen_recursion(char *s)
{
int longit = 0;
if (*s)
{
longit += _strlen_recursion(s + 1);
longi++;
}
return (longit);
}
