#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed into it
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, total;

	if((argc + 1) == 0)
	{
		printf("%d",0);
	}
	else{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i]) ==0)
			{
			printf("Error\n");
			}
			total += atoi(argv[i]);
		}
		printf("%d\n", total);
	}
	return(0);
}
