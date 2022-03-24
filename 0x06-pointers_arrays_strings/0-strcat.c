/**
 * _strcat - Concatenates two strings
 * @dest: string to be overwrite
 * @src: string to overwrite
 *
 * Return: Pointer to the destination string concatenated
 */
char *_strcat(char *dest, char *src)
{
	char *str[]= dest;
	int i;

	while (str[i] != '\0')
	{
		if (str[i] == '\0')
		{
			str[i] = src;
		}
		i++;
	}
	return *str;
}
