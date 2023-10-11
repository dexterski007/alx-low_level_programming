#include <stdio.h>

/**
 * main - prints the sign of a number
 *
 * Description: This function checks the sign of
 * and 0 for zero.
 *
 * Return: 1 if 'n' is positive, -1 if 'n' is negative, 0 if 'n' is zero.
 */
int main(void)
{
    unsigned long int a = 1, b = 2, c;
    int count;

    printf("%lu, %lu, ", a, b);

    for (count = 2; count < 98; count++)
    {
        c = a + b;
        if (count < 97)
        {
            printf("%lu, ", c);
        }
        else
        {
            printf("%lu\n", c);
        }

        a = b;
        b = c;
    }

    return (0);
}
