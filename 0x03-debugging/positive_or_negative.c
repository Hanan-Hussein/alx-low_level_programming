#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return:This returns a negative or positive number
 */
void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
}
