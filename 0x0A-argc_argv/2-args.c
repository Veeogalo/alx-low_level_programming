#include "main.h"
#include <stdio.h>
/*
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv:argument array
 */
int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
printf("%s\n", argv[n]);
return (0);
}
