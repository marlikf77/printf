#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
int print_int(va_list args);
int print_dec(va_list args);
int de_putchar(char c);
int de_puts(const char*c);
#endif
