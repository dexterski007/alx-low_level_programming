/**
 * print_name - a function to pointer to print name
 *
 * @name: a string
 * @f: a function pointer
 *
 * Return: nada
**/

void print_name(char *name, void (*f)(char *))

{
	f(name);
}
