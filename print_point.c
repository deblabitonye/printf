#include "main.h"
/**
 * print_point - prints pointer
 * @val: value
 * Return: int
 */

int print_point(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int i, c;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = print_hex_run(a);
	return (c + 2);
}
