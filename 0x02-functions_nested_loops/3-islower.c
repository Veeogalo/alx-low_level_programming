#include "main.h"
/**
* main - Entry point
* _islower - shows 1 if the input is lowercase and 0 if another
* Return: Always 1 (Success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
