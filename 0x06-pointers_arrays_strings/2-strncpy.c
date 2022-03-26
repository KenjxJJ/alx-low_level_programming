/**
 * _strncpy - Copies src string to dest string
 * @dest: Final string to be copied to.
 * @src: String to be copied.
 * @n: number of bytes to written
 *
 * Return: Pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ;i < n; i++)
		dest[i] = '\0';

	return dest;
}
