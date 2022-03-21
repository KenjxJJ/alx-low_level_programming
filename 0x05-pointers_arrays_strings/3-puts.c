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

	i = 0;
	while (s[i] != '\0')
	{
		int su;

		su = _putchar(s[i]);
		i++;
	}
}
