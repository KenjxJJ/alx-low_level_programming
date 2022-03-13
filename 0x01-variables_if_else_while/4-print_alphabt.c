
#include <stdio.h>


int main()
{
  int c;
  c=97;
  
  while(c > 96 && c < 123)
    {
     if( (char)c != 'e' && (char)c != 'q' )
       {
	putchar((char)c);
        c++;
       }else{
     c++;
     }
    }
  putchar('\n');
  return (0);
}
