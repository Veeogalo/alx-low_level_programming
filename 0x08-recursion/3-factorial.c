#include "main.h"
/**
 * int factorial - a function that returns the factorial of a given number
 * @n:input as an integer
 * Return: Always 0
 */
int factorial(int n)
{
if (n < 1)
{
return (-1);
}
if (n == 0)
{
return (0);
}
else
{
return( n* factorial(n - 1));
}
}
