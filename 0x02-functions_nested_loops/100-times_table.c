#include<stdio.h>

/**
 * print_times_table - Prints the times table of the input,
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
int x, j, mult;
if (n >= 0 && n <= 15)
{
for (x = 0; x <= n; x++)
{
putchar('0');
for (j = 1; j <= n; j++)
{
putchar(',');
putchar(' ');
mult = x * j;
if (mult <= 99)
{
putchar(' ');
}
if (mult <= 9)
{
putchar(' ');
}
if (mult >= 100)
{
putchar((mult / 100) + '0');
putchar((mult / 10) % 10 + '0');
}
else if (mult <= 99 && mult >= 10)
{
putchar((mult / 10) + '0');
}
putchar((mult % 10) + '0');
}
putchar('\n');
}
}
}
