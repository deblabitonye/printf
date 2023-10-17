#include "main.h"
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
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
}
