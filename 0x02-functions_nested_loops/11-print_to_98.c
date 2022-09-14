#include<stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n % 10)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
}
else if (n % 100)
{
putchar((n / 100) + '0');
putchar((n % 100) + '0');
}
putchar(44);
putchar(32);
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
if (n % 10)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
}
putchar(44);
putchar(32);
n--;
}
}
else
{
putchar(57);
putchar(56);
}
putchar('\n');
}
