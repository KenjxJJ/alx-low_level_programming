#include "main.h"
/**
 * puts2 - Prints every second char in a string
 * @s: Character Array of string
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int sum_len, i;
	char c;

	i = 0;
	sum_len = 0;

	if (s[i] != ' ')
	{
		while (s[i] != '\0')
		{
			if( i % 2 == 0)
			{
				c = s[i];
				_putchar(c);
			}
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
