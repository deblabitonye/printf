#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


typedef struct format
{
	char *id;
	int (*f)();
}match;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int Print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_dec(va_list args);
int print_int(va_list args);
int print_37(void);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_run(unsigned int num);
int print_asc_string(va_list val);
int print_point(va_list val);
int print_hex_run(unsigned long int num);
int print_revst(va_list val);
int print_rot13(va_list val);
#endif
