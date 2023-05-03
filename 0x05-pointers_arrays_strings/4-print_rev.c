#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 * return: 0
 */

void print_rev(char *s)
{
	int long = 0;
	int i;
	while (*s != '\0')
	{
		long++;
		s++;
	}
	s--;
	for (i = long; i > 0; i--)
	{_putchar(*s);
		s--;
	}
	_putchar('\n');
}
