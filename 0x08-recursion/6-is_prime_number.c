#include "main.h"
int squirrel(int n, int x);

/**
 * is_prime_number - primes
 *
 * @n: number
 * Return: number
**/

int is_prime_number(int n)

{
	return (squirrel(n, 2));
}


/**
 * squirrel - squared2
 *
 * @n: number
 * @x: iterations
 * Return: number
**/

int squirrel(int n, int x)

{
	if (n <= 1)
	return (0);
	if (x * x > n)
	return (1);
	if (n % x == 0)
	return (0);
	return (squirrel(n, x + 1));
}
