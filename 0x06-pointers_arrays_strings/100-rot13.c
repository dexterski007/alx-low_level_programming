/**
 * rot13 - to rot13 fork this is a descr
 *
 * @str: wth?
 * Return: a string
*/

char *rot13(char *str)

{
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char num[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
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
	break;
	}
	i++;
	}
	n++;
	}
	return (str);
}
