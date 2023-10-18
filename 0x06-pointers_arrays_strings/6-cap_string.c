/**
 * cap_string - to  cap fork this is a descr
 *
 * @str: wth?
 * Return: a string
*/

char *cap_string(char *str)

{
	int n = 0;

	while (str[n])
	{
	while (!(str[n] >= 'a' && str[n] <= 'z'))
	{
	n++;
	}
	if (str[n - 1] == '\n' ||
	str[n - 1] == ' ' ||
	str[n - 1] == '\t' ||
	str[n - 1] == 44 ||
	str[n - 1] == 59 ||
	str[n - 1] == 46 ||
	str[n - 1] == 33 ||
	str[n - 1] == 63 ||
	str[n - 1] == 34 ||
	str[n - 1] == 40 ||
	str[n - 1] == 41 ||
	str[n - 1] == 125 ||
	str[n - 1] == 123 ||
	n == 0)
	{
	str[n] = str[n] - 32;
	}
	n++;
	}
	return (str);
}
