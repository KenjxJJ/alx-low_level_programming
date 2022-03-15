#include <stdio.h>

/**
 * main -First function executed
 * @void  - null object params
 *
 * Description: Prints digits in asc order
 * Return: Prints digits in asc order
 */
int main(void)
{
	int char_digit;

	char_digit = 48;

	/* Check char digits below 58(equivalent to less than 10-base 10) */
	while (char_digit < 58)
	{
		putchar((char)char_digit);
		if (char_digit == 57)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');

		/* Go to the next digit */
		char_digit++;
	}

	return (0);
}
