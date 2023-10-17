#include "main.h"
/**
 * print_revst - function that prints a string in reverse
 * @val: arguments
 *
 * Return: the string
 */

int print_revst(va_list val)
{

	char *s = va_arg(val, char*);
	int i;
	int j = 0;

	if (s == NULL)
		S = "(null)";
	while (s[i] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[s]);
	return (j);
}
