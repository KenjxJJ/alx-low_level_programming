/**
 * print_chessboard - Print the chessboard
 *
 * Return: Always 0
 *
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		if ( i == 0 || i == 1 || i == 6 || i == 7)
		{
			for (int j = 0; j < 8; j++)
			{
				_putchar(a[j));
			}
		}
		else
		{
			_putchar(' ');
		}

	}
}
