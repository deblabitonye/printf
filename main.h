#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int Print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int _printf(const char *format, ...);
int print_dec(va_list args);
int print_int(va_list args);
int print_37(void);

#endif
