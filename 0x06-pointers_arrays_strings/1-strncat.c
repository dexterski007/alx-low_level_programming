/**
 * _strncat - strncat fork this is a descr
 *
 * @src: source
 * @dest: destination
 * @n: ill what i it does
 *
 * Return: a string
*/

char *_strncat(char *dest, char *src, int n)

{
	int f = 0;
	int j = 0;

	while (dest[f] != '\0')
	{
	f++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[f] = src[j];
	f++;
	j++;
	}
	if (f < n)
	{
	dest[f] = '\0';
	return (dest);
	}
	else
	return (dest);
}
