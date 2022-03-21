/**
 * _strlen - Function that checks length of a string
 * @s: char array of string pointer
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	char end;
	int sum_len, i;

	i = 0;
	sum_len = 0;

	while (end != '\0')
	{
		end  = *(s + i);
		i++;
		sum_len++;
	}
	return (sum_len);
}
