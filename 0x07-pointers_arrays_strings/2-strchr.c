/**
 * _strchr - Locates a character in a string
 * @s: String used for a search
 * @c: Character to be searched for
 *
 * Return: Pointer to the first occurance of c in the
 * the string s or NULL
 *
 */
char *_strchr(char *s, char c)
{
	char _occ;

	for (int i = 0; s[i] !='\0'; i++)
	{
		if (c == s[i])
		{
			_occ = (char)i;
			break;
		}
	}
	if(_occ)
		return _occ;
	else
		return NULL;
}
