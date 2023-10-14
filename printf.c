#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * printf - prints an output according to format
 *
 * Returns: number of characters printed
 */

int _printf(const char *format, ...)
{
	int char_printed = 0;

	va_list Our_List_Args;
	if (format == NULL)
		return -1;
	va_start(Our_List_Args, format);
	while(*format)
		{
			if (*format != %)
			{
			write(1, format, 1);
			char_printed++;
			}
			else 
			{
				format ++;
			}
			if (*format == '\0')
			{
				break;
			}
			if (*format == %)
			{
				write(1,format, 1);
				char_printed ++;
			}
			if (*format == c)
			{
				char c  = va_arg(Our_List_Args, int);
				write(1, &c, 1);
				char_printed ++;
			}
			if (*format == s)
			{
				char *str = va_arg(Our_List_Args, int);
				int str_len=0;

				while (str(str_len) != '\0')
					str_len ++;
				write(1, str, str_len);
				char_printed ++;
			}
			format ++;
		}
	va_end(Our_List_Args);
	return char_printed;
}
