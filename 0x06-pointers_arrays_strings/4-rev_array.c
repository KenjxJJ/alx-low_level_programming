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
	int b[999];

	i = n-1;
	j = 0;

	while (i > -1)
	{
		b[j] = a[i--];
		j++ ;
	}

	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
}
