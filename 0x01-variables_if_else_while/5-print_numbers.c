#include <stdio.h>

/**
 * main -First function executed
 * @void  - null object params
 *
 * Description: Prints digits below 10
 * Return: Prints digits of decimal base
 */
int main(void)
{
	int digit;

	digit = 0;

        /* Check digit below 10 */
	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
