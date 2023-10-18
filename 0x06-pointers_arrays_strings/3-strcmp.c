/**
 * _strcmp - strcmp fork this is a descr
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a string
*/

int _strcmp(char *s1, char *s2)

{
	int res = 0;
	int n = 0;

	while (s1[n] != '\0')
	{
	if (s1[n] == s2[n])
	{
	n++;
	}
	else
	{
	res = s1[n] - s2[n];
	return (res);
	}
	}
	return (res);
}
