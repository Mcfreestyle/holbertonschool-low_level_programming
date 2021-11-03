
/**
 * print_name - callback that f points to
 * @name: name of the person
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

