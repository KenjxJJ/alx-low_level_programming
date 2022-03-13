#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <string.h>

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char str[50];
	int last_digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	last_digit = n%10;
	  
	if (last_digit > 5)
	  strcpy(str, "is greater than 5");
	else if(last_digit == 0)
	  strcpy(str,"is 0");
	else
	  strcpy(str,"is less than 6 and not 0");
	
	printf("Last digit of %d is %d and %s\n", n, last_digit, str );
	return (0);
}
