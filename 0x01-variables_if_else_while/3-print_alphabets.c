
#include <stdio.h>


int main()
{
  int c;
  c=97;

  while( c > 96 && c < 123)
  {
    putchar((char)c);
    c++;
  }

  c=65;
  
  while(c > 64 && c < 91)
    {
      putchar((char)c);
      c++;      
    }
  putchar('\n');
  return (0);
}
