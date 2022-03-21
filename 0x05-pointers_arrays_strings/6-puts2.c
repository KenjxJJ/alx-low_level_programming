#include "main.h"
/**
 * puts2 - Prints every second char in a string
 * @str: Character Array of string
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;
	char c;

	i = 0;

	if (str[i] != ' ')
	{
		while (str[i] != '\0')
		{
			if (i % 2 == 0)
			{
				c = str[i];
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
