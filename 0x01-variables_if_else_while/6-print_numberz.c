#include <stdio.h>

/** main -First function executed
 * @void  - null object params
 *
 * Description: Prints digit of base 10 from the character set
 * Return: Digits as characters less than 10.
 */
int main(void)
{
	int digit;
	digit = 48;

        /* Check digit below 10 */
	while (digit < 58)
	{
		putchar((char)digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
