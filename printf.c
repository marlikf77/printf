#include "main.h"
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...)
{
    if (format == NULL)
        return -1;
    int char_printed = 0;
    va_list args;
    va_start(args, format);
    while (*format)
    {
        if (*format != '%')
        {
            char c = *format;
            write(1, &c, 1);
            char_printed++;
        }
        else
        {
            format++; // Move past '%'
            if (*format == 'c' || *format == 's')
            {
                if (*format == 'c')
                {
                    char c = va_arg(args, int);
                    write(1, &c, 1);
                    char_printed++;
                }
                else if (*format == 's')
                {
                    char *str = va_arg(args, char *);
                    int str_len = write(1, str, strlen(str));
                    char_printed += str_len;
                }
            }
            else if (*format == '%')
            {
                char c = '%';
                write(1, &c, 1);
                char_printed++;
            }
        }
        format++;
    }
    va_end(args);
    return char_printed;
}
