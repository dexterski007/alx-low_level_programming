#include <unistd.h>

/**
 * main - entry point
 *
 * this is the main function
 * I should use neither printf not puts
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar\, 2015-10-19", 61);
	write(2, "\n", 2);

	return (1);
}
