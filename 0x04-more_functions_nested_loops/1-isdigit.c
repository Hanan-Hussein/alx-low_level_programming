#include <stdio.h>

/**
 * _isdigit - check if it is a digit
 * @c:  variable c
 * Return: Always 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (0);
}
return (c);
putchar('\n');
}
