#include "main.h"
/**
* main - Entry point
* print_last_digit - prints the last digit of a number
* @n:input number as an integer
* Return: last digit
*/
int print_last_digit(int n)
{
int ld = n % 10;
if (ld < 0)
{
_putchar(-ld + 48);
return (-ld);
}
else
{
_putchar(ld + 48);
return (ld);
}
}
