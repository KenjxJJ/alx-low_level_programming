#include "main.h"
/**
 * re_string - Reverses a string
 * @s - Character Array of string
 *
 * Return: a string in a reverse
 */
void rev_string(char *s)
{
	int sum_len, i;
	char c;

	i = 0;
	sum_len = 0;

	while (s[i] != '\0')
	{
		sum_len++;
		i++;
	}

	i = sum_len;
	for(; i > -1; i--)
	{
		c = s[i];
		_putchar(c);
	}
}
