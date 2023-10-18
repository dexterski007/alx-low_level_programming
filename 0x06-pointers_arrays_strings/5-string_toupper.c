/**
 * string_toupper - to upper fork this is a descr
 *
 * @str: wth?
 * Return: a string
*/

char *string_toupper(char *str)

{
	int n = 0;

	while (str[n])
	{
	if (str[n] >= 'a' && str[n] <= 'z')
	{
	str[n] = str[n] - 32;
	}
	n++;
	}
	return (str);
}
