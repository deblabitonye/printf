#include "main.h"
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
unsigned int i;
int count = 0;
va_list args;
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%' && format[i + 1] == 'c')
{

char c = va_arg(args, int);
_putchar(c);
count++;
i++;
}
else if (format[i] == '%' && format[i + 1] == '%')
{

_putchar('%');
count++;
i++;
}
else
{

_putchar(format[i]);
count++;
}
}

va_end(args);
return (count);
=======
	match m[] = {
		{"%c" , printf_char}, {"%s", printf_string}, {"%%" , print_37}, {"%d", print_dec}, {"%i" , print_int}, {"%r" , print_revs}, {"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unisgned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] = '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (m[k].id[0] == format[i] && m[k].id[1] == format[ i + 1])
			{
				len = len + m[k].f(args);
				i == i + 2;
				goto Here;
			}
			k--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);

>>>>>>> 05da34e30091e8c5a0642db35f7b793afbcb1adb
}
