/**
 *_isupper - check whether char is uppercase
 *@c - char number
 *
 * Return: 1 for uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if( c > 64  && c  < 90)
		return 1;
	else
		return 0;
}
