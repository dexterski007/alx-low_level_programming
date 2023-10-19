/**
 * reverse_array - to reverse an array
 * @str: string to reverse
 *
 * Return: a string?
*/

void reverse_array(char *str)

{
	int k = 0;
	int l = 0;
	char temp;

	while (str[k] != '\0')
	k++;
	k--;

	while (k > 0)
	{
	temp = str[k];
	str[k] = str[l];
	str[l] = temp;
	k--;
	l++;
	}
}




/**
 * infinite_add - add fork this is a descr
 *
 * @n1: 1st num
 * @n2: 2nd num
 * @r: result
 * @size_r: size of num
 *
 * Return: a pointer
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int i = 0, j = 0, carry = 0, s = 0;
	int sum = 0, dig1 = 0, dig2 = 0, res1 = 0;

	while (n1[i] != '\0')
	i++;
	i--;
	while (n2[j] != '\0')
	j++;
	j--;
	if (i >= size_r || j >= size_r)
	return (0);
	while (i >= 0 || j >= 0 || carry == 1)
	{
	if (i < 0)
	dig1 = 0;
	else
	dig1 = (n1[i] - '0');
	if (j < 0)
	dig2 = 0;
	else
	dig2 = (n2[j] - '0');
	sum = dig1 + dig2 + carry;
	if (sum >= 10)
	carry = 1;
	else
	carry = 0;
	if (s >= (size_r - 1))
	{
	return (0);
	}
	res1 = sum % 10;
	r[s] = (res1 + '0');
	s++;
	i--;
	j--;
	}
	if (s == size_r)
	return (0);
	r[s] = '\0';
	reverse_array(r);
	return (r);
}
