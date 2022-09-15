#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: variable c
 * Return: 1 if c is uppercase.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
if (c >= 97 && c <= 122)
{
return (0);
}
return (c);
putchar('\n');
}
