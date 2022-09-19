#include "main.h"
#include <stdio.h>

/**
 * puts2 - swaps two integers
 * @str: string parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
while (*str)
{
putchar(*str);
str=str+2;
}
putchar('\n');
}
