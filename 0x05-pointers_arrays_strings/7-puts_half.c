#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * return: half of input
 */

void puts_half(char *str)
{
	int a, n, long;

	long = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		long++;
	}
	n = (long / 2);

	if ((lon % 2) == 1)
	{
		n = ((long + 1) / 2);
	}

	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
