/**
 * swap_int - Swaps two integers
 * @a - First Integer
 * @b - Second Integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	/* Temporal holder of one value */
	int p;

	p = *b;
	*b = *a;
	*a = p;
}
