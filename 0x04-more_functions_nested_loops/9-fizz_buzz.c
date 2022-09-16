#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ( i % 3 == 0)
		{
			printf("%s", "Fizz");
			printf("%s", " ");
		}
		else if ( i % 5 == 0)
		{
			printf("%s", "Buzz");
			printf("%s", " ");
		}
		else
		{
			printf("%i", i);
			printf("%s", " ");
		}
	}
	printf("\n");
	return (0);
}
