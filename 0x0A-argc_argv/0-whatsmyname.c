#include "main.h"
#include <stdio.h>
/*
* main - prints the program's name followed by a new line.
* @argc:arguments count
* @ *argv:array of arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", *argv);
return (0);
}
