#include <stdio.h>

int main()
{
   int char_digit;
   char_digit=48;

   /* Check char digits below 58(equivalent to less than 10-base 10) */
   while(char_digit < 58 )
   {
     putchar((char)char_digit);

      /* Go to the next digit */
      char_digit++;
      
   }
   
   /* Assign to a char digit for a through f */
   char_digit=97;
   
   while (char_digit > 96 && char_digit < 103)
   {
     putchar( (char)char_digit);
     char_digit++;
   }

   putchar('\n');
   
   return (0);
}

