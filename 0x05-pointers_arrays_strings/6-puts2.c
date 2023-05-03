#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: input
 * return: print
 */

void puts2(char *str)
{
	int long = 0;
	int m = 0;
	char *x = str;
	int i;

	while (*x != '\0')
	{
		x++;
		long++;
	}
	m = long - 1;
	for (i = 0; i <= m; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
