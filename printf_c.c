#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - a function that outputs according to format
 * @format: evaluated specifier for format
 * Return: count of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int a, s_count, count = 0;
	va_list Our_Args;

	if (*format == '\0')
	{
		return (-1);
	}
	va_start(Our_Args, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			de_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			de_putchar(va_arg(Our_Args, int));
		}
		else if (format[a + 1] == 's')
		{
			s_count = de_puts(va_arg(Our_Args, char*));
			a++;
			count += (s_count - 1);
		}
		else if (format[a + 1] == '%')
		{
			de_putchar('%');
		}
		count += 1;
	}
	va_end(Our_Args);
	return (count);
}
