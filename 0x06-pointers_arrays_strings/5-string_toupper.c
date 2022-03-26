/**
 * string_toupper - Changes all lowercase to upper
 * @params: Any character string
 *
 * Return: Capitalized String
 */
char *string_toupper(char *str)
{
	char pos_upper;
	int pos, i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <=  'z')
		{
			pos = (int)(str) - 97;
			pos_upper = 65 + pos;
			str[i] = (char)(pos_upper);
		}
		i++;
	}
	return str;

}
