/**
 *_idigit - check whether char is a digit or not
 *@c - char number
 *
 * Return: 1 for digit or 0 otherwise
 */
int _isupper(int c)
{
	if(c > 47 && c < 58)
		return 1;
	else
		return 0;
}
