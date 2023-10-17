#include "main.h"
/**
 * de_puts - prints string
 * @c: the string to print
 * Return: the number of bytes printed
 */
int de_puts(char c)
{
	int count = 0;
	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			de_putchar(c[count]);
		}
	}
	return (count);
}
