#include "main.h"
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c" , printf_char}, {"%s", Print_string}, {"%%" , print_37}, {"%d", print_dec}, {"%i" , print_int}, {"%r" , print_revst}, {"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_asc_string}, {"%p", print_point}
	};

	va_list args;
	int i = 0, len = 0;
	int k;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		k = 13;
		while (k >= 0)
		{
			if (m[k].id[0] == format[i] && m[k].id[1] == format[ i + 1])
			{
				len = len + m[k].f(args);
				i = i + 2;
			}
			k--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);

}
