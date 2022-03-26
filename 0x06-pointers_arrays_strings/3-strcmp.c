/**
 * _strcmp - Compares two strings
 * @s1: First string pointer to compared with
 * @s2: Second string pointer
 *
 * Return: integer number that shows that if 0 - then
 * both strings are the same, negative integer then
 * s1 is less than s2 and positive integer then s1 is greater
 * s2
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
		}else if( s1[i] == s2[i])
			diff = 0;
	}
	return diff;
}
