/**
 * _strlen - Function that checks length of a string
 * @s: char array of string pointer
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int sum_len, i;

	i = 0;
	sum_len = 0;

	while (s[i] != '\0')
	{
		sum_len++;
		i++;
	}
	return (sum_len);
}
