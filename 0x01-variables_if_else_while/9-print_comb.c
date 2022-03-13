#include <stdio.h>

int main()
{
   int char_digit;
   char_digit=48;

   /* Check char digits below 58(equivalent to less than 10-base 10) */
   while(char_digit < 58)
   {
     putchar((char)char_digit);
     

     if( char_digit == 57)
     {
       putchar('\n');
       break;
     }

      putchar(',');
      putchar(' ');

      /* Go to the next digit */
      char_digit++;
      
   }

   return (0);
}
