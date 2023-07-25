#include "main.h"
/**
* _isdigit - checks for digits (0 through to 9)
* @c: integer being checked
* Return: 1 if its a digit 0 if otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

