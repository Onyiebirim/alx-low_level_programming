#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
        int n;

        /* Seed the random number generator */
        srand(time(0));

        /* Assign a random number to the variable n */
        n = rand() % 201 - 100;

        /* Check if the number is positive or negative */
        if (n > 0)
                printf("The number is positive.\n");
        else if (n < 0)
                printf("The number is negative.\n");
        else
                printf("The number is zero.\n");

        return (0);
}

