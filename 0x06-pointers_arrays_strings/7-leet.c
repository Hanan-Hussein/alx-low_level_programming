#include <stdio.h>
#include <string.h>
/**
 * *leet - check the code for
 *
 * Return: Always 0.
 */
char *leet(char *n)
{
    size_t i;
    
    for (i = 0; i < strlen(n); i++)
    {
        if (n[i] == 'a' || n[i] == 'A')
        {
            n[i] = 52;
        }
        else if (n[i] == 'e' || n[i] == 'E')
        {
            n[i] = 51;
        }
        else if (n[i] == 'o' || n[i] == 'O')
        {
             n[i] = 48;
        }
        else if (n[i] == 't' || n[i] == 'T')
        {
            n[i] = 55;
        }
        else if (n[i] == 'l' || n[i] == 'L')
        {
            n[i] = 49;
        }
    }
    return (n);
}
