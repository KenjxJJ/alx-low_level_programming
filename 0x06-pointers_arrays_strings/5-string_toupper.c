/**
 * string_toupper - Changes all lowercase to upper
 * @params: Any character stringp
 *
 * Return: Capitalized String
 */
char *string_toupper(char *)
{
	char pos_upper;
	int pos, i;

	while (*[i] != '\0')
	{
		if ((int)* > 96  && (int)* < 123)
		{
			pos = (int)* - 97;
			pos_upper = 65+pos;
			*[i] = (char)pos;
			i++;
		}
		i++;
	}
	return *;

}
