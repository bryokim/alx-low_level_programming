/**
 * print_name -prints a name
 * @name: name to be printed
 * @f: function used for printing the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
