/**
 * reverse_array - Reverse contents of an int array
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int b[n];

	i = n;
	j = 0;
	while (i > 0)
	{
		b[j] = a[--i];
		j++;
		i--;
	}

	i=0;
	while( i < n)
	{
		a[i] = b[i];
	}
}
