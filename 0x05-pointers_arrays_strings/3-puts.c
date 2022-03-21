#include "main.h"

/**
 *_ puts - Function that prints a string followed by a new line
 * @s: char array of string pointer
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
