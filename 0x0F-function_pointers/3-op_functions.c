#include "3-calc.h"

/**
 * op_add  - calc sum
 *
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: sum
**/

int op_add(int a, int b)

{
	int c = 0;

	c = a + b;
	return (c);
}

/**
 * op_sub  - calc sub
 *
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: sub
**/

int op_sub(int a, int b)

{
	int c = 0;

	c = a - b;
	return (c);
}

/**
 * op_mul  - calc mul
 *
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: mul
**/

int op_mul(int a, int b)

{
	int c = 0;

	c = a * b;
	return (c);
}

/**
 * op_div  - calc div
 *
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: div
**/

int op_div(int a, int b)

{
	int c = 0;

if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	c = a / b;
	return (c);
}

/**
 * op_mod  - calc mod
 *
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: mod
**/

int op_mod(int a, int b)

{
	int c = 0;

if (b == 0)
{
	printf("Error\n");
	exit(100);
}
	c = a % b;
	return (c);
}
