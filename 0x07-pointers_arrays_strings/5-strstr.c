/**
 * _strstr - Locates a substring
 * @haystack: String used for a search
 * @needle: Character to be searched for
 *
 * Return: Pointer to the first occurance of substring needle in the
 * the string haytack or NULL(No terminating bytes)
 */
char *_strchr(char *haystack, char *needle)
{
	char *p;

	for (int i = 0; haystack[i] !='\0'; i++)
	{
		for (int c = 0; needle[c] != '\0'; c++)
		{
			if (needle[c] == haystack[i])
			{
				p = &haystack[i];
				break;
			}
		}
	}

	return p;

}
