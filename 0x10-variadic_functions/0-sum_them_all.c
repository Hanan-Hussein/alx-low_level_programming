#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Getting a sum of all the arguments
 *
 * @n:number of arguments
 *
 * Return:sum of the args or 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

if (n == 0)
return (0);
va_start(ap, n);
sum = 0;
for (i = 0; i < n; i++)
	sum += va_arg(ap, int);
va_end(ap);
return (sum);
}

