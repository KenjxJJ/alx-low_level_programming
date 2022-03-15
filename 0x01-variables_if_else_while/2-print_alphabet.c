#include <stdio.h>

/**
 * main - First function executed
 * @void - null object params
 *
 * Description: Prints a-z.
 * Return: Character from a to z.
 */
int main(void)
{
	int c;

	c = 97;
	while (c > 96 && c < 123)
	{
		putchar((char)c);
		c++;
	}
	putchar('\n');
	return (0);
}
