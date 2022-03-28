/**
 * _strspn - Gets length of the prefix substring
 * @s: String used for a search
 * @accept: Characters of the substring
 *
 * Return: Number of bytes in the initial segment of s with
 * only bytes of the accept substring
 * the string s or NULL
 *
 */
unsigned int _strspn(char *s, char *accept)
{
       	int num;

	for (int i = 0; s[i] !='\0'; ++i)
	{
		for (int m = 0; accept[m] != '\0'; ++m)
		{
			if (accept[m] == s[i])
			{
				num++;
			}
		}
	}

	return num;
}
