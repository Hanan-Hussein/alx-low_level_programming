#include <stdio.h>

/**
 * print_to_98 - prints to 98
 * @n: number to be printed
 */
void print_to_98(int n)
{
while (n <= 98)
{
if (n >= 0)
{
if (n % 100 / 10 > 0)
{
putchar((n % 100 / 10) + 48);
}
if (n % 10)
{
putchar(n % 10 + 48);
}
if (n % 10 == 0)
{
putchar('0');
}
if (n == 98)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
n++;
}
else if (n < 0)
{
int val = (n * -1);
putchar('-');
if (val % 1000 / 100 > 0)
{
putchar((val % 1000 / 100) + 48);
}
if (val % 100 / 10 > 0)
{
putchar((val % 100 / 10 + 48));
}
if (val % 100 / 10 == 0 && val > 10)
{
putchar('0');
}
if (val % 10)
{
putchar(val % 10 + 48);
}
if (val % 10 == 0)
{
putchar('0');
}
putchar(44);
putchar(32);
n++;
}
}
while (n > 98)
{
if (n >= 0)
{
if (n % 1000 / 100 > 0)
{
putchar((n % 1000 / 100) + 48);
}
if (n % 100 / 10)
{
putchar((n % 100 / 10) + 48);
}
if (n % 100 / 10 == 0)
{
putchar('0');
}
if (n % 10)
{
putchar(n % 10 + 48);
}
if (n % 10 == 0)
{
putchar('0');
}
if (n == 99)
{
putchar(',');
putchar(' ');
putchar(9 + '0');
putchar(8 + '0');
putchar('\n');
break;
}
putchar(44);
putchar(32);
n--;
}
}
}
