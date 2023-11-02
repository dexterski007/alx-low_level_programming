#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

/**
 * strlent - length of string
 *
 * @s: string
 *
 * Return: integer
**/

int strlent(char *s)

{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);
}



/**
 * ex98 - exit
 *
 * Return: print data
**/

void ex98(void)

{
		printf("Error\n");
		exit(98);
}

/**
 * is_num - check if number
 *
 * @str: string
 *
 * Return: 0 or 1
**/

int is_num(char *str)

{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] > '9' || str[i] < '0')
	return (0);
	}
	return (1);
}

/**
 * main - multiply
 *
 * @argc: n arguments
 * @argv: arg value
 *
 * Return: true ort false
**/

int main(int argc, char **argv)

{
	int i, z, num1, num2, *res, len, len1, len2, carry = 0;
	char *s1, *s2;

	if (argc != 3)
	ex98();
        s1 = argv[1];
        s2 = argv[2];
	if (is_num(s1) == 0 || is_num(s2) == 0)
	ex98();
	len1 = strlent(s1);
	len2 = strlent(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (res == NULL)
	return (1);
	for (i = 0; i < len; i++)
	res[i] = 0;
	res[i + 1] = '\0';
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
	num1 = s1[len1] - '0';
	carry = 0;
	len2 = strlent(s2);
		for (len2 = len2  - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += res[len1 + len2 + 1] + (num1 * num2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		res[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
		z = 1;
		if (z)
		_putchar(res[i] + '0');
	}
	if (!z)
	_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
