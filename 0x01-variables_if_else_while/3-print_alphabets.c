#include <stdio.h>

/**
 * main - First function executed
 * @void - null object params
 *
 * Description: Prints A-Z and a-z.
 * Return: Character from a-z then A to Z.
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

	c = 65;
	while (c > 64 && c < 91)
	{
		putchar((char)c);
		c++;
	}
	putchar('\n');
	return (0);
}
