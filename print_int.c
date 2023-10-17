#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_int - prints an integer
 * @args: arguments to be printed
 * @va_list - ....
 * Return: number of characters to be printed
 */

int print_int(va_list args)
{
int j = va_arg(args, int);
int i = 0;
int exp = 1;
int num = j;
int digit = j / exp;
if (j < 0)
{
de_putchar('-');
j = -j;
i++;
}
if (j == 0)
{
de_putchar('0');
return (i + 1);
}
while (num > 0)
{
exp /= 4;
de_putchar(digit + '0');
j = digit * exp;
i++;
}
return (i);
}
