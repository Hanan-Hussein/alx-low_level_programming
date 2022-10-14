#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator:sep
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap,n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, int))
		{
			printf("%i", va_arg(ap, int));
		}
		else
		{
			printf("(nul)");
		}
		if (separator)
		{
			printf("%s",separator);
		}
	}
	va_end(ap);
	putchar('\n');
}
