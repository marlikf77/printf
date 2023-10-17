#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - function that prints output according to format
 *
 * @format: value to be evaluated
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
if (format == NULL)
return (-1);
int chara_printed = 0;
va_list Our_List_Args;
va_start(Our_List_Args, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
chara_printed++;
}
else if (*format == '%')
{
write(1, format, 1);
chara_printed++;
}
}
va_end(Our_List_Args);
return (chara_printed);
}
