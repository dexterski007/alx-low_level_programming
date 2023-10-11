#include <stdio.h>

/**
 * main - Entry point for the program
 *
 * Description: This function calculates and prints the first 98 Fibonacci numbers
 * using modulo to prevent overflow.
 *
 * Return: 0 on successful execution
 */

int main(void)
{
    int a = 1, b = 1, c;
    int count;

    printf("%d, %d, ", a, b);

    for (count = 2; count < 98; count++)
    {
        c = a + b;
        if (count < 97)
        {
            printf("%d, ", c);
        }
        else
        {
            printf("%d\n", c);
        }

        a = b;
        b = c;
    }

    return (0);
}
