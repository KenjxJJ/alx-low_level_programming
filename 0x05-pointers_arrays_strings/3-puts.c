#include "main.h"

/**
 * _puts - Function that prints a string followed by a new line
 * @s: char array of string pointer
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	int i;
	char c;

	i = 0;
	/* Character from string */
	c = s[i];
	while (s[i] != '\0')
	{
		int su;

		su = _putchar(c);
		i++;
	}
}
