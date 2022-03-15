#include <stdio.h>

/**
 * main - First function executed
 * @void - null object params
 *
 * Description: Prints a-z without e and q characters.
 * Return: Characters from a-z without e and q
 */
int main(void)
{
	int c;
	c = 97;

	while (c > 96 && c < 123)
	{
		if ((char)c != 'e' && (char)c != 'q' )
		{
			putchar((char)c);
			c++;
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
