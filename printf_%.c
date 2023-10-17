#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
/**
 * _printf - function that prints output according to format
 *
 * @format: value to be evaluated
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int r_printed = 0;
va_list Our_List_Args;
if (format == NULL)
return (-1);
va_start(Our_List_Args, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
r_printed++;
}
else if (*format == '%')
{
write(1, format, 1);
r_printed++;
}
}
va_end(Our_List_Args);
return (r_printed);
}

