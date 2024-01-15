/**
 * _strcat - strcat fork this is a descr
 *
 * @src: source
 * @dest: destination
 *
 * Return: a string
*/

char *_strcat(char *dest, char *src)

{
	int n = 0;
	int j = 0;

	while (dest[n] != '\0')
	{
	n++;
	}
	while (src[j] != '\0')
	{
	dest[n] = src[j];
	n++;
	j++;
	}
	dest[n] = '\0';

	return (dest);
}
