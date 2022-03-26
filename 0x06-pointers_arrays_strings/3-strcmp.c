/**
 * _strcmp - Compares two strings
 * @s1: Final string to compared with
 * @s2: Second string
 *
 * Return: Pointer to the dest string
 */
int _strcmp(char *s1, char *s2)
{
	int diff, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = (int)s1[i] - (int)s2[i];
			break;
		}
	}
	return diff;
}
