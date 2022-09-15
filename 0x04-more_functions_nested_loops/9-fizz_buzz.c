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
			printf("%s\n", "Fizz");
		}
		else if ( i % 5 == 0)
		{
			printf("%s\n", "Buzz");
		}
		else
		{
			printf("%i\n", i);
		}
	}
	return (0);
}
