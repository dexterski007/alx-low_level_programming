/**
 * leet - to upper fork this is a descr
 *
 * @str: wth?
 * Return: a string
*/

char *leet(char *str)

{
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int n = 0;
	int i = 0;

	while (str[n])
	{
	i = 0;
	while (let[i])
	{
	if (str[n] == let[i])
	{
	str[n] = num[i];
	}
	i++;
	}
	n++;
	}
	return (str);
}
