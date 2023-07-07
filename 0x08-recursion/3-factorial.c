#include "main.h"
/**
* factorial - returns the factorial of a given number
* @n: the number to return factorial from
* Return: 1 on success  and -1 on error
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
return (n * factorial(n - 1));
}
