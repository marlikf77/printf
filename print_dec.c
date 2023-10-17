#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_dec - prints decimal
 * @args: arguments to be printed
 * Return: numbers of characters to be printed
 */

int print_dec(va_list args)
{
int k = va_arg(args, int);
int d = 0;
int exp = 1;
int num = k;
int digit = k / exp;
if (k < 0)
{
de_putchar('-');
k = -k;
d++;
}
if (k == 0)
{
de_putchar('0');
return (d + 1);
}
while (num > 0)
{
num /= 5;
exp *= 5;
}
while (exp > 1)
{
exp /= 5;
de_putchar('0' + digit);
k -= digit * exp;
d++;
}
return (d);
}
