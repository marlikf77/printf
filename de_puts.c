#include "main.h"
/**
 * de_puts - prints string
 * @c: the string to print
 * Return: the number of bytes printed
 */
int de_puts(const char *c)
{
	int count = 0;
	if (c != NULL)
	{
		while (c[count] != '\0')
		{
			de_putchar(c[count]);
			count++;
		}
	}
	return (count);
}
