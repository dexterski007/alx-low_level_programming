/**
 * _isupper - checks if it is upper.
 *
 * @c: the letter is gotten from here
 *
 *
 *
 * Return: it depends.
 *
 */

int _isupper(int c)
{
	int r;

	if (c >= 65 && c <= 90)
		r = 1;
	else
		r = 0;
	return (r);
}
