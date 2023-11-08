#include "3-calc.h"

/**
 * main - calculator
 *
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success 98 if fail
**/

int main(int argc, char **argv)
{
	int arg1, arg2, res;

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(arg1, arg2);

	printf("%d\n", res);

	return (0);
}
