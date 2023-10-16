/**
 * swap_int - check the code
 *
 * @a: yeah science
 * @b: yeah science 2
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int *c, d;

	c = &d;
	*c = *b;
	*b = *a;
	*a = *c;
}
