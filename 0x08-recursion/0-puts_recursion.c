/**
 * _puts_recursion - Prints a string recursively 
 * @s - String
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	int j;

	if (s[j] = '\0')
		_putchar('\n');
	else
	{
		_puts_recursion(s[j++]);
	}
}
