/**
 * _isdigit - checks if it is upper.
 *
 * @c: the letter is gotten from here
 *
 *
 *
 * Return: it depends.
 *
 */

int _isdigit(int c)
{
	int r;

	if (c >= 48 && c <= 57)
		r = 1;
	else
		r = 0;
	return (r);
}
