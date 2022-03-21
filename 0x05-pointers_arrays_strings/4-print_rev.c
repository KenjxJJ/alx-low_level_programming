#include "main.h"
/**
 * re_string - Reverses a string
 * @s: Character Array of string
 *
 * Return: a string in a reverse
 */
void print_rev(char *s)
{
	int sum_len, i;
	char c;

	i = 0;
	sum_len = 0;

	if (s[i] != ' ')
	{
		while (s[i] != '\0')
		{
			sum_len++;
			i++;
		}
	}
	else
	{
		sum_len = 0;
	}

	i = sum_len;
	while (i >= 0)
	{
		c = s[--i];
		_putchar(c);
	}
}
