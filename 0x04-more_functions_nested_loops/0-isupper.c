/**
 *_isupper - check whether char is uppercase
 *@c - char number
 *
 * Return: 1 for uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if((char)c > '9' && (char)c  <'a')
		return 1;
	else
		return 0;
}
