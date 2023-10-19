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
	int i = 0;
	int j = 0;
	int s = size_r;
	int carry = 0;
	int sum = 0;
	int dig1 = 0;
	int dig2 = 0;
	int res1 = 0;

	while (n1[i] != '\0')
	i++;

	while (n2[j] != '\0')
	j++;

	while (i >= 0 || j >= 0 || carry)
	{
	dig1 = n1[i] - '0';
	dig2 = n2[j] - '0';
	sum = dig1 + dig2 + carry;
	res1 = sum % 10;
	r[s] = (res1 + '0');
	carry = (sum / 10);
	i--;
	j--;
	s--;
	}
	return (r);
}
